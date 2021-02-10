#include<stdio.h>
int main(){
	int n,max[20]={0},mmax=0,a[20]={2e8},i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[j]>=a[i] && max[j]>=max[i]){
				max[i]=max[j]+1;
				if(max[i]>mmax)
					mmax=max[i];
			}
	}
	printf("%d",mmax);
	return 0;
}