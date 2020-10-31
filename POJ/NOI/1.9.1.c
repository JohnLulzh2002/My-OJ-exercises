#include<stdio.h>
int main(){
	int n,a[10001],x,i=0;
	scanf("%d",&n);
	for(;i<n;i++)scanf("%d",&a[i]);
	scanf("%d",&x);
	for(i=0;i<n;i++)
		if(a[i]==x){
			n=0;
			printf("%d",i+1);
			break;
		}
	if(n)printf("-1");
	return 0;
}