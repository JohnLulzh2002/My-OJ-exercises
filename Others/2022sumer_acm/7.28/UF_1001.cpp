#include<cstdio>
#include<cstring>
#include<stack>
#define N 505
using namespace std;
typedef long long ll;
const ll mod=1000000007;
ll ksm(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1)
			ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans;
}
int inv(int x){
	return ksm(x,mod-2);
}
int f[N][N];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,a[N],i,j;
		scanf("%d%d",&n,&m);
		memset(f,0,sizeof(f));
		stack<int> s;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				if(a[i]==0){
					f[]
				}
			}
		}
		printf("%d",f[n][0]);
	}
	return 0;
}