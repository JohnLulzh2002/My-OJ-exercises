#include<stdio.h>
#define MAX 1001
#define Max(a,b) a>b?a:b
int main(){
	int n,isPrime[MAX]={},i;
	long long ans[MAX]={};
	for(i=2;i<MAX;i++){
		isPrime[i]++;
		if(isPrime[i]){
			int j=i*2;
			for(;j<MAX;j+=i)
				isPrime[j]=-1;
			ans[i]++;
			for(j=2;j+i<MAX;j++)
				ans[j+i]+=ans[j];
		}
	}
	scanf("%d",&n);
	printf("%lld",ans[n]);
	return 0;
}