#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float x,s=0;
	scanf("%f%d",&x,&n);
	if(x!=1)
		printf("%.2f",(pow(x,n+1)-1)/(x-1));
	else printf("%.2f",(float)n);
	return 0;
}