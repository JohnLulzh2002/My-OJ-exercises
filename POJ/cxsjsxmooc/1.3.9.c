#include<stdio.h>
int main(){
	int n,a,s=1;
	for(scanf("%d %d",&a,&n);n>0;n--)s*=a;
	printf("%d",s);
	return 0;
}