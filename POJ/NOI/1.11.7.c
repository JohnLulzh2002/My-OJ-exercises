#include<stdio.h>
#include<stdlib.h>
int n,a[100001];
int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
int main(){
	int t=1,i=0,j,m;
	scanf("%d",&n);
	for(;i<n;i++)scanf("%d",&a[i]);
	scanf("%d",&m);
	qsort(a,n,sizeof(int),comp);
	for(i=0;i<n;i++){
		int b=m-a[i],l=i+1,r=n-1,m;
		while(l<=r){
			m=(l+r)/2;
			if(a[m]==b){
				printf("%d %d",a[i],b);
				i=n;
				t=0;
				break;
			}
			if(a[m]>b)r=m-1;
			if(a[m]<b)l=m+1;
		}
	}
	if(t)printf("No");
	return 0;
}