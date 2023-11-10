#include<stdio.h>
int main(){
	int m,n,a[101],b,i,j;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)scanf("%d",&a[i]);
	a[m]=2e9;
	for(i=j=0;j<n;j++){
		scanf("%d",&b);
		while(a[i]<b)
			printf("%d ",a[i++]);
		printf("%d ",b);
	}
	while(i<m)
		printf("%d ",a[i++]);
	return 0;
}