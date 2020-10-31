#include<stdio.h>
int main(){
	int a[10001],i,n,max=0,min=10001;
	for(scanf("%d",&n);i<n;i++)scanf("%d",&a[i]);
	while(n--){
		if(a[n]>max)max=a[n];
		if(a[n]<min)min=a[n];
	}
	printf("%d",max-min);
	return 0;
}