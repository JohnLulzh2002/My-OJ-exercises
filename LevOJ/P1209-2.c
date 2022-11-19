#include<stdio.h>
int isPrime(int x){
	int i;
	for(i=2;i*i<=x;i++)
		if(x%i==0)
			return 0;
	return 1;
}
int main(){
	int m;
	while(~scanf("%d",&m))
		while(m--)
			if(isPrime(m)&&isPrime(m-2)){
				printf("%d %d\n",m-2,m);
				break;
			}
	return 0;
}