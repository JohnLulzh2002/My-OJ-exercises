#include<stdio.h>
int main(){
	int x,a,b,c;
	scanf("%d",&x);
	for(a=1;a*5<x;a++)for(b=1;b*3<x;b++)
		if(x-a-b==2*x-10*a-6*b&&x>a+b)
			printf("%d %d %d\n",a,b,x-a-b);
	return 0;
}