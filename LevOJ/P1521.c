#include<stdio.h>
int main(){
	int n,i,a=1,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s+=a*=i;
	printf("%d\n",s);
	return 0;
}