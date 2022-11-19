#include<stdio.h>
int gcd(int a,int b)
{return a%b?gcd(b,a%b):b;}
int main(){
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c))
		printf("%d\n",gcd(gcd(a,b),c));
	return 0;
}