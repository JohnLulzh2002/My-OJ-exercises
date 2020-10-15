#include<stdio.h>
int main(){
	int n,k,a[100001],i=0;
	scanf("%d%d",&n,&k);
	for(;i<n;i++)scanf("%d",&a[i]);
	for(i=k;i<k+n;i++)
		printf("%d\n",a[i%n]);
	return 0;
}
