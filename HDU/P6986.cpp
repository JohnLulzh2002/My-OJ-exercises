#include<iostream>
#define MOD1 1000000007
#define MOD2 1000000009
#define X 19560929
using namespace std;
long long ans1,ans2;
int kind[8888],head[8888],kk;
int tot,n,T,x;
struct Node{
	int to,next;
}e[8888];
void addedge(int u,int v){
	e[++tot].next=head[u];
	e[tot].to=v;
	head[u]=tot;
}
long long pppow1[2222],pppow2[2222];
void dfs(int now,int has[],int vis[]){
	vis[now]=1;
	if(has[kind[now]]==0) kk++;
	has[kind[now]]++;
	ans1=(ans1+kk*pppow1[now-1])%MOD1;
	ans2=(ans2+kk*pppow2[now-1])%MOD2;
	for(int i=head[now];~i;i=e[i].next){
		int to=e[i].to;
		if(vis[to])continue;
		dfs(to,has,vis);
	}
	if(has[kind[now]]==1) kk--;
	has[kind[now]]--;
}
int main(){
	pppow1[0]=pppow2[0]=1;
	for(int i=1;i<2001;i++){
		pppow1[i]=pppow1[i-1]*X%MOD1;
		pppow2[i]=pppow2[i-1]*X%MOD2;
	}
	cin>>T;
	while(T--){
		cin>>n;
		tot=0;
		for(int i=1;i<=n;i++) head[i]=-1;
		for(int i=1;i<n;i++){
			cin>>x;
			addedge(x,i+1);
			addedge(i+1,x);
		}
		for(int i=1;i<=n;i++) cin>>kind[i];
		for(int i=1;i<=n;i++){
			ans1=ans2=0;
			kk=0;
			int has[8888]={},vis[8888]={};
			dfs(i,has,vis);
			cout<<ans1<<" "<<ans2<<endl;
		}
	}
}