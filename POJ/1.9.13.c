#include<stdio.h>
int main(){
	int a[20001],c[101]={},i=0,n,max=0;
	for(scanf("%d",&n);i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(!c[a[i]])printf("%d ",a[i]);
		c[a[i]]++;
	}
	return 0;
}