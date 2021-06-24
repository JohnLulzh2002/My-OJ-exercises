#include<stdio.h>
int gcd(int a,int b)
{return (a%b)?gcd(b,a%b):b;}
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b))
		printf("%d\n",gcd(a,b));
	return 0;
}