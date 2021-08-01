#include<stdio.h>
#define MOD 998244353
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,k,r,p=1,w=2;
		scanf("%lld%lld%lld",&a,&b,&k);
		r=k%2;
		k/=2;
		while(k){
			if(k&1)p=p*w%MOD;
			w=w*w%MOD;
			k>>=1;
		}
		a=a*p%MOD;
		b=b*p%MOD;
		if(r){
			a+=b;
			b=a-2*b;
			while(b<0)b+=MOD;
			a%=MOD;
			b%=MOD;
		}
		printf("%lld %lld\n",a,b);
	}
}