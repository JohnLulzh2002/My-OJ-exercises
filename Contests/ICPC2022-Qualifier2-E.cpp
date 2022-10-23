#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Endl '\n'
ll gcd(ll a,ll b){ return b==0 ? a : gcd(b,a%b); }
bool is_prime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
void solve(){
	ll ans=0,n,k;
	cin>>n>>k;
	ans=k;
	for(int i=2;;i++){
		if(is_prime(i)&&gcd(i,k)==1){
			ans+=i;
			if(i==2){
				for(int i=3;i<=n;i++){
					if(i&1){
						ans+=3;
					}
					else{
						ans+=2;
					}
				}
			}
			else{
				for(int i=3;i<=n;i++){
					if(i&1){
						ans+=2;
					}
					else{
						ans+=3;
					}
				}
			}
			cout<<ans<<Endl;
			return;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}