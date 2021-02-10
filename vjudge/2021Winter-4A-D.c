#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n),n){
		int i,a[1002]={-1e8},max[1002]={0},mmax=0;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			int j;
			for(j=0;j<i;j++)
				if(a[j]<a[i] && max[j]+a[i]>max[i]){
					max[i]=max[j]+a[i];
					if(max[i]>mmax)
						mmax=max[i];
				}
		}
		printf("%d\n",mmax);
	}
	return 0;
}