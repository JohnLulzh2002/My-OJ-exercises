#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int max[1000]={0},mmax=0,
			a[1000]={0},i,j;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			for(j=0;j<i;j++)
				if(a[j]<a[i] && max[j]>=max[i]){
					max[i]=max[j]+1;
					if(max[i]>mmax)
						mmax=max[i];
				}
		}
		printf("%d\n",mmax);
	}
	return 0;
}