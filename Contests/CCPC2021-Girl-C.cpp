#include<iostream>
using namespace std;
int n,m,tot=0,c[100],head[100],sq[100][100],vis[100],ans[100],w[100],an=0,x,y,ttt=0;
struct Node{
	int to,next;
}e[100000];
void addedge(int u,int v){
	tot++;
	e[tot].to=v;
	e[tot].next=head[u];
	head[u]=tot;
}
void dfs(int now){
	//cout<<now<<" @#$ "<<an<<endl;
	if(now==n+1)return;
	ans[now]=max(ans[now],an);
	for(int i=head[now];~i;i=e[i].next){
		int to=e[i].to;
		vis[c[to]]++;
		if(vis[c[to]]==1)
			an+=w[c[to]];
		dfs(to);
		vis[c[to]]--;
		if(vis[c[to]]==0)
			an-=w[c[to]];
	}
	return;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>c[i];
	for(int i=1;i<=n;i++)
		cin>>w[i];
	for(int i=1;i<=n+2;i++){
		head[i]=-1;
		vis[i]=0;
		ans[i]=0;
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		sq[x][y]=1;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++){
				if(sq[i][k]+sq[k][j]==2)
					sq[i][j]=0;
			}
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(sq[i][j]==1)addedge(i,j);
	addedge(n,n+1);
	addedge(n+2,1);
	//cout<<"###\n";
	dfs(n+2);
	//cout<<"###\n";
	for(int i=1;i<=n;i++)cout<<ans[i]<<endl;
	return 0;
}