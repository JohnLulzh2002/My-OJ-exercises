#include<stdio.h>
#define MAX 10000000
char notPrime[MAX];
int prime[MAX/5];
int main(){
	int n,i,j,count=0;
	for(i=2;i<MAX;i++){
		if(!notPrime[i])
			prime[count++]=i;
		for(j=0;j<count&&i*prime[j]<MAX;j++)
			notPrime[i*prime[j]]=1;
	}
	find:
	while(~scanf("%d",&n)){
		int p2=2+n%2;
		n-=2+p2;
		for(i=0;2*prime[i]<=n;i++){
			int expected=n-prime[i],m,l=i,r=count-1;
			do{
				m=(l+r)/2;
				if(prime[m]<expected)
					l=m+1;
				if(prime[m]>expected)
					r=m-1;
			}while(l<r && prime[m]!=expected);
			if(prime[m]==expected||prime[r]==expected){
				printf("2 %d %d %d\n",p2,prime[i],expected);
				goto find;
			}
		}
		printf("Impossible.\n");
	}
	return 0;
}