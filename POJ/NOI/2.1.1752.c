#include<stdio.h>
int main(){
	int a,min,max;
	scanf("%d",&a);
	if(a%2){
		printf("0 0");
		return 0;
	}
	a/=2;
	min=a/2+a%2;
	max=a;
	printf("%d %d\n",min,max);
	return 0;
}