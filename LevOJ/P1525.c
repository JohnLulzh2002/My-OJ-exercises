#include<stdio.h>
int isPrime(int n){
	int i=2;
	for(;i*i<n;i++)
		if(!(n%i))
			return 0;
	return 1;
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;1;i++)
		if(isPrime(i)&&isPrime(n-i)){
			printf("%d=%d+%d\n",n,i,n-i);
			break;
		}
	return 0;
}