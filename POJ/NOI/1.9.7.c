#include<stdio.h>
int main(){
	int a[10001],i=0,n,s=0,max=0;
	for(scanf("%d",&n);i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]>max)max=a[i];
	for(i=0;i<n;i++)
		if(a[i]<max)s+=a[i];
	printf("%d",s);
	return 0;
}