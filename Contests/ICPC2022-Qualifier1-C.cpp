#include<bits/stdc++.h>
using namespace std;
const int N=1e6+3;
int cnt[N];
void solve(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"1"<<"\n";
		return;
	}
	for(int i=1;i<=n;i++){
		cnt[i]=0;
	}
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		cnt[u]++;
		cnt[v]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(cnt[i]==1){
			ans++;
		}
	}
	cout<<ans<<'\n';
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}