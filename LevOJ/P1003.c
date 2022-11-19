#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b;
		char c;
		scanf("%lld%c%lld",&a,&c,&b);
		if(c=='+')
			printf("%lld\n",a+b);
		else if(c=='-')
			printf("%lld\n",a-b);
		else if(c=='*')
			printf("%lld\n",a*b);
		else
			printf("%lld\n",a/b);
	}
	return 0;
}