#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
		puts("x<y");
	else if(a>b)
		puts("x>y");
	else
		puts("x==y");
	return 0;
}