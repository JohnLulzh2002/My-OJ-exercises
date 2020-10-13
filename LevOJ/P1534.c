#include<stdio.h>
int main(){
	int b;
	float a;
	scanf("%f%d",&a,&b);
	if(a==0) printf("0");
	else printf("%d",(int)(100*a+b));
	return 0;
}
