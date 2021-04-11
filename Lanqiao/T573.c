#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{return *(int*)b-*(int*)a;}
int main(){
	int n,a[1001],i;
	long long ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmp);
	for(i=1;i<n;i++){
		ans+=(long long)(a[0]+1)*(a[i]+1);
		a[0]+=a[i];
	}
	printf("%lld",ans);
	return 0;
}