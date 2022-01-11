#include<stdio.h>
int fa[100001];
int f(int n){
	if(fa[n]==n)return n;
	return fa[n]=f(fa[n]);
}
int main(){
	int n,m,i,ans=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		fa[i]=i;
	while(m--){
		int a,b;
		scanf("%d%d",&a,&b);
		fa[f(b)]=f(a);
	}
	for(i=1;i<=n;i++)
		ans+=f(i)==i;
	printf("%d",ans-1);
	return 0;
}