#include<stdio.h>
int main(){
	int m,n,k,a[101],b[101],i=0,j=0;
	scanf("%d%d",&m,&n);
	for(;i<m;i++)scanf("%d",&a[i]);
	for(;j<n;j++)scanf("%d",&b[j]);
	a[m]=b[n]=99999999;
	i=j=0;
	while(i+j<m+n){
		if(a[i]>b[j])
			printf("%d ",b[j++]);
		else printf("%d ",a[i++]);
	}
	return 0;
}
