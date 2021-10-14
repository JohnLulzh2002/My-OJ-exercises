#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(n==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}