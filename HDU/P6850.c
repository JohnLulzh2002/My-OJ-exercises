#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,ans=1;
		scanf("%lld",&n);
		n--;
		n/=2;
		while(n){
			n/=2;
			ans*=2;
		}
		printf("%lld\n",ans-1);
	}
	return 0;
}