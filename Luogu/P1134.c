#include<stdio.h>
int main(){
	long long a=1;
	int n;
	scanf("%d",&n);
	n++;
	while(--n){
		a*=n;
		while(a%10==0)a/=10;
		a%=100000000;
	}
	printf("%d",a%10);
	return 0;
}