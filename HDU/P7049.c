#include<stdio.h>
#define MAX 100003
#define Eps 1e-7
int equal(double a,double b)
{return ((a-b)>-Eps)&&((a-b)<Eps);}
int fa[MAX];
int findFa(int x){
	if(x!=fa[x])
		fa[x]=findFa(fa[x]);
	return fa[x];
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		double avg=0;
		int ans=1,head[MAX],n,i;
		char vis[MAX]={},used[MAX]={};
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",head+i);
			fa[i]=i;
		}
		for(i=1;i<=n;i++)
			fa[i]=findFa(head[i]);
		for(i=1;i<=n;i++)
			fa[i]=findFa(head[i]);
		for(i=1;i<=n;i++){
			if(used[fa[i]]) continue;
			used[fa[i]]=1;
			long long s=0,ss=0,p;
			for(p=i;1;p=head[p]){
				vis[p]++;
				if(vis[p]==2){
					s+=p;
					ss++;
				}else
				if(vis[p]==3) break;
			}
			if(avg==0)
				avg=(double)s/ss;
			else if(!equal(avg,(double)s/ss)){
				ans=0;
				break;
			}
		}
		if(ans) printf("YES\n");
		else printf("NO\n");
	}
}