#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,t=1,r=0;
	long long ans=n;
	for(i=0;i<n;i++)ans*=n;
	ans-=(n-1)*m;
	printf("%lld",ans);
	return 0;
}