#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int n,a[1001],i,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmp);
	for(i=1;i<n;i++)
		if(a[i-1]+1==a[i])
			ans++;
	printf("%d",ans);
	return 0;
}