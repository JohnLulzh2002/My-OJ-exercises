#include<stdio.h>
int main(){
	long long n;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		n+=-(n/2+n/3+n/5+n/7)+(n/6+n/10+n/14+n/15+n/21+n/35)-(n/30+n/42+n/105+n/70)+(n/210);
		printf("%lld\n",n);;
	}
	return 0;
}