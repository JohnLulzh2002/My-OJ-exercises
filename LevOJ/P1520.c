#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(;a%10==0;a/=10);
	for(;a;a/=10){
		printf("%d",a%10);
	}
	putchar('\n');
	for(;b%10==0;b/=10);
	for(;b;b/=10){
		printf("%d",b%10);
	}
	return 0;
}