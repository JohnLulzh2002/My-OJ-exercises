#include<stdio.h>
int main() {
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	n-=y/x;
	if(y%x!=0)n--;
	if(n>0)printf("%d",n);
	else printf("0");
	return 0;
}
