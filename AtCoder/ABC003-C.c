#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b){
	double t=*(double*)b-*(double*)a;
	if(t>0)return 1;
	if(t<0)return -1;
	return 0;
}
int main(){
	int n,k,i;
	double c=0,a[10000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	qsort(a,n,sizeof(double),cmp);
	while(k--)
		c=(c+a[k])/2;
	printf("%.6lf",c);
	return 0;
}