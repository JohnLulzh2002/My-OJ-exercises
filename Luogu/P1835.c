#include<stdio.h>
#define MAX 1000002
char notPrime[MAX],a[MAX];
int prime[MAX],n;
int main(){
	int ans=0;
	long long l,r,i,j;
	for(i=2;i<MAX;i++){
		if(!notPrime[i])
			prime[n++]=i;
		for(j=0;j<n&&i*prime[j]<MAX;j++)
			notPrime[i*prime[j]]=1;
	}
	scanf("%lld%lld",&l,&r);
	if(l==1)l++;
	for(i=0;i<n;i++){
		j=l/prime[i]*prime[i]-l;
		if(j<0)j+=prime[i];
		if(l/prime[i]<2)j=2*prime[i]-l;
		for(;j<=r-l;j+=prime[i])a[j]=1;
	}
	for(i=0;i<=r-l;i++)if(!a[i])ans++;
	printf("%d\n",ans);
	return 0;
}