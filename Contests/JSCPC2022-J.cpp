#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
map<ull,ull> ans;
ull f(ull n){
	if(ans.find(n)!=ans.end())
		return ans[n];
	if(n<3)return ans[n]=n;
	if(n%2)return ans[n]=f(n/2)*f(n/2);
	return ans[n]=2*f((n-2)/2)*f(n/2);
}
int main(){
	int t;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ull p2[67],n=1;
	for(t=0;t<66;t++){
		p2[t]=n;
		n*=2;
	}
	cin>>t;
	while(t--){
		cin>>n;
		if(n>1048575){
			int k=lower_bound(p2,p2+65,n)-p2;
			if(p2[k]-n==1)
				cout<<"1\n";
			else if(p2[k]-n<8)
				cout<<f(n)<<'\n';
			else if(k>0&&n-p2[k-1]<8)
				cout<<f(n)<<'\n';
			else
				cout<<"0\n";
		}else if(n==0)
			cout<<"1\n";
		else
			cout<<f(n)<<'\n';
	}
	// for(n=1;n<1000;n++)
	// 	// if(f(n))
	// 		cout<<n<<'\t'<<f(n)<<'\n';
	return 0;
}