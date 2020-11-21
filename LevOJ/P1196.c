#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n))
		printf("%d\n",n*(n+1)/2+1);
	return 0;
}