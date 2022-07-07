#include<stdio.h>
#define ll long long
ll gcd(ll a,ll b){
	if(b)return gcd(b,a%b);
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll x,y,g,ans=2;
		scanf("%lld%lld%*lld%*lld",&x,&y);
		g=gcd(x,y);
		x/=g;y/=g;
		if(!(x&1)||!(y&1)){
			printf("-1\n");
			goto impossible;
		}
		x>>=1;y>>=1;
		while(x||y){
			g=1;
			if((x&1)+(y&1)!=1){
				printf("-1\n");
				goto impossible;
			}
			ans++;
			x>>=1;y>>=1;
		}
		printf("%lld\n",ans);
		impossible:;
	}
	return 0;
}