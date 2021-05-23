#include<stdio.h>
int gcd(int a,int b)
{return !b?a:gcd(b,a%b);}
int main(){
	int n,b,d;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&b,&d);
		printf("%d\n",(b-1)/(d/gcd(b,d)));
	}
	return 0;
}