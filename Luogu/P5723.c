#include<stdio.h>
#define MAX 55555
char notP[MAX];
int main(){
	int l,primes[MAX/5],sum=0,i=2,j,c=0;
	scanf("%d",&l);
	while(sum<=l){
		if(!notP[i])sum+=primes[c++]=i;
		for(j=0;j<c&&i*primes[j]<MAX;j++)
			notP[i*primes[j]]=1;
		i++;
	}
	c--;
	for(i=0;i<c;i++)
		printf("%d\n",primes[i]);
	printf("%d",c);
	return 0;
}