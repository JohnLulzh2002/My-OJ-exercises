#include<stdio.h>
int main(){
	int i,n,a[1001]={-1},max[1001]={0},mmax=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		int j,m=-1;
		for(j=0;j<i;j++)
			if(a[j]<a[i] && max[j]>m)
				m=max[j];
		max[i]=m+1;
		if(max[i]>mmax)mmax=max[i];
	}
	printf("%d",mmax);
	return 0;
}