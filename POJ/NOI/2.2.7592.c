#include<stdio.h>
int gcd(int a,int b)
{return (a%b)?gcd(b,a%b):b;}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	{a+=b;b=a-b;a-=b;}
	printf("%d",gcd(a,b));
	return 0;
}