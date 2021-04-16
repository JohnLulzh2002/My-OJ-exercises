#include<stdio.h>
#define Max 1000000007
int main(){
	int n,i;
	long long ans=0,a[5002]={};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		a[i]++;
	}
	for(i=5000;i;i--)
		if(a[i]>1){
			int j,t=a[i]*(a[i]-1)/2;
			for(j=1;j<(i+1)/2;j++)
				ans+=t*a[j]*a[i-j];
			if(!(i%2))
				ans+=t*a[i/2]*(a[i/2]-1)/2;
			ans%=Max;
		}
	printf("%lld",ans);
	return 0;
}