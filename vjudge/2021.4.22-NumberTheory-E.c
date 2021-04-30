#include<stdio.h>
#define MAX 1300000
char notPrime[MAX];
int prime[MAX/5],gap[MAX];
int main(){
	int n,i,j,count=0;
	for(i=2;i<MAX;i++){
		if(!notPrime[i]){
			prime[count++]=i;
			gap[i]=0;
			if(i>2)for(j=prime[count-2]+1;j<i;j++)
				gap[j]=i-prime[count-2];
		}
		for(j=0;j<count&&i*prime[j]<MAX;j++)
			notPrime[i*prime[j]]=1;
	}
	while(scanf("%d",&n),n)
		printf("%d\n",gap[n]);
	return 0;
}