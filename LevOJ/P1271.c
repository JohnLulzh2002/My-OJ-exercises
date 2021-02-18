#include<stdio.h>
int main(){
	int a,b=0;
	while(~scanf("%d",&a))
		b+=a;
	printf("%d",b);
	return 0;
}