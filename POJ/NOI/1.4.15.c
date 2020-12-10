#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b)a=b;
	scanf("%d",&b);
	if(a<b)a=b;
	printf("%d",a);
	return 0;
}
