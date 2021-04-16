#include<stdio.h>
#include<stdlib.h>
int cmp(void*a,void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int n,m,a[10001],i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	while(m--){
		for(i=n-2;a[i]>a[i+1];i--);
		for(j=n-1;a[i]>a[j];j--);
		a[i]+=a[j];
		a[j]=a[i]-a[j];
		a[i]-=a[j];
		qsort(a+i+1,n-i-1,sizeof(int),cmp);
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}