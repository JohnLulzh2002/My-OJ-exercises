#include<stdio.h>
int main(){
	int i,n,t,a[24],use[24]={},sum=0,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&t);
	while(!use[n]){
		use[0]++;
		sum+=a[0];
		for(i=0;use[i]>1;i++){
			use[i]=0;
			sum-=2*a[i];
			use[i+1]++;
			sum+=a[i+1];
		}
		if(sum==t && !use[n]){
			cnt++;
			for(i=0;i<n;i++)
				if(use[i])
					printf("%d ",a[i]);
			printf("\n");
		}
	}
	printf("%d",cnt);
	return 0;
}