#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[22],use[22]={},n,k,ans=0;
	cin>>n>>k;
	while(k--)
		use[n-k-1]=1;
	for(k=0;k<n;k++)
		cin>>a[k];
	do{
		int s=0;
		for(int i=0;i<n;i++)
			s+=use[i]*a[i];
		bool t=true;
		for(int i=2;t&&i*i<=s;i++)
			if(!(s%i)){
				t=false;
				break;
			}
		if(t)ans++;
	}while(next_permutation(use,use+n));
	cout<<ans;
	return 0;
}