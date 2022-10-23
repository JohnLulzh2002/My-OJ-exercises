#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Endl '\n'
const int N=1e5+5;
ll gcd(ll a,ll b){ return b==0 ? a : gcd(b,a%b); }
ll pre[N],a[N],b[N];
void solve(){
	ll k,x,y;
	cin>>k>>x>>y;
	pre[0]=0;
	pre[1]=1;
	int len=1;
	for(int i=2;;i++)
	{
		pre[i]=pre[i-1]*(k+1);
		if(pre[i]>2e18/(k+1))
		{
			len=i;
			break;
		}
	}
	pre[++len]=1e18;
	int cnta=1,cntb=1;
	a[1]=x;
	b[1]=y;
	while(1)
	{
		if(a[cnta]==1)
		{
			break;
		}
		cnta++;
		int now=lower_bound(pre,pre+1+len,x)-pre;
		// cout<<x<<" "<<now<<pre[now]<<Endl;
		if(pre[now]>=x)
		{
			a[cnta]=(x-pre[now-1])/k+((x-pre[now-1])%k!=0);
			x=a[cnta];
		}
	}
	while(1){
		if(b[cntb]==1){
			break;
		}
		cntb++;
		int now=lower_bound(pre,pre+1+len,y)-pre;
		// cout<<y<<" "<<now<<pre[now]<<Endl;
		if(pre[now]>=y){
			b[cntb]=(y-pre[now-1])/k+((y-pre[now-1])%k!=0);
			y=b[cntb];
		}
		
	}
	reverse(a+1,a+1+cnta);
	reverse(b+1,b+1+cntb);
	// for(int i=1;i<=cnta;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<Endl;
	// for(int i=1;i<=cntb;i++){
	// 	cout<<b[i]<<" ";
	// }
	// cout<<Endl;
	for(int i=1;i<=min(cnta,cntb);i++)
	{
		if(a[i]!=b[i])
		{
			cout<<a[i-1]<<Endl;
			return;
		}
	}
	cout<<a[min(cnta,cntb)]<<Endl;
}
int main(){
	// ios::sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	solve();
}