#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
int main(){
	int i=0,n,a[100001];
	for(scanf("%d",&n);i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),comp);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		if(a[i]-a[i-1])
		printf(" %d",a[i]);
	return 0;
}