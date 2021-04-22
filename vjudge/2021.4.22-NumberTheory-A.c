#include<stdio.h>
#define MAX 1000000
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
	while(scanf("%d",&n),n)
		for(i=0;i<count;i++){
			int expected=n-prime[i],m,l=0,r=count-1;
			do{
				m=(l+r)/2;
				if(prime[m]<expected)
					l=m+1;
				if(prime[m]>expected)
					r=m-1;
			}while(l<r && prime[m]!=expected);
			if(prime[m]==expected||prime[r]==expected){
				printf("%d = %d + %d\n",n,prime[i],expected);
				break;
			}
		}
	return 0;
}