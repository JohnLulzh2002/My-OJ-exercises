#include<stdio.h>
#define MAX 10000000
char notPrime[MAX];
int prime[MAX/5],s[10002];
int main(){
	int t,maxp=0,i,j,n;
	for(i=2;i<MAX;i++){
		if(!notPrime[i])
			prime[maxp++]=i;
		for(j=0;j<maxp&&prime[j]*i<MAX;j++)
			notPrime[prime[j]*i]=1;
	}
	scanf("%d",&t);
	find:
	while(t--){
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",&s[i]);
			s[i]+=s[i-1];
		}
		for(i=2;i<=n;i++)for(j=0;i+j<=n;j++)
			if(!notPrime[s[i+j]-s[j]]){
				printf("Shortest primed subsequence is length %d:",i);
				for(n=j;n<i+j;n++)printf(" %d",s[n+1]-s[n]);
				printf("\n");
				goto find;
			}
		printf("This sequence is anti-primed.\n");
	}
	return 0;
}