#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[1001],i=0,j,count=0;
		for(;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1;j++)
				if(a[j]>a[j+1]){
					a[j]+=a[j+1];
					a[j+1]=a[j]-a[j+1];
					a[j]-=a[j+1];
					count++;
				}
		printf("%d\n",count);
	}
	return 0;
}