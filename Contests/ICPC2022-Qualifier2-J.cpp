#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Endl '\n'
const int N=1e5+5;
ll gcd(ll a,ll b){ return b==0 ? a : gcd(b,a%b); }
int a[N],pre[N],suf[N];
void solve(){
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	pre[n]=1;
	for(int i=n-1;i>=1;i--){
		if(a[i]<a[i+1]){
			pre[i]=pre[i+1]+1;
		}
		else{
			pre[i]=1;
		}
	}
	suf[1]=1;
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]){
			suf[i]=suf[i-1]+1;
		}
		else{
			suf[i]=1;
		}
	}
	// for(int i=1;i<=n;i++){
	// 	cout<<pre[i]<<" ";
	// }
	// cout<<Endl;
	// for(int i=1;i<=n;i++){
	// 	cout<<suf[i]<<" ";
	// }
	// cout<<Endl;
	int l=1,r=n,now=1,maxx=0;
	while(l<r){
		if(maxx>=a[l]&&maxx>=a[r])
		{
			now^=1;
			break;
		}
		if(a[l]==a[r]){
			if((min(pre[l],r-l+1)&1)||(min(suf[r],r-l+1)&1)){
				break;
			}
			else{
				now^=1;
				break;
			}
		}
		else if(a[l]>a[r]){
			if(min(pre[l],r-l+1)&1){
				break;
			}
			else if(a[r]>maxx){
				maxx=a[r];
				r--;
			}
			else
			{
				now^=1;
				break;
			}
		}
		else{
			if(min(suf[r],r-l+1)&1){
				break;
			}
			else if(a[l]>maxx){
				maxx=a[l];
				l++;
			}
			else
			{
				now^=1;
				break;
			}
		}
		// cout<<now<<" "<<l<<" "<<r<<Endl;
		now^=1;
	}
	if(now==1){
		cout<<"Alice"<<Endl;
	}
	else{
		cout<<"Bob"<<Endl;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}