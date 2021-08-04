#include<stdio.h>
#define MOD 1000000007
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long ans1,ans2,n;
		scanf("%I64d",&n);
		n%=MOD;
		const long long sum1=n*(n+1)/2%MOD,
			sum2=(__int128_t)n*(n+1)*(2*n+1)/6%MOD;
		ans1=sum2*sum1%MOD;			//xOy
		ans1+=(sum1-1)*(sum1-1)%MOD;//xOz
		ans1+=(sum2-1)*(sum1-1)%MOD;//yOz
		ans1%=MOD;
		ans2=n*n%MOD*sum1%MOD*sum2%MOD;
		printf("%I64d\n%I64d\n",ans1,ans2);
	}
	return 0;
}