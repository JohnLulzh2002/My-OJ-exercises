#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
string s[22];
int dfs(bool msk[],string lst){
	int ans=0;
	for(int i=0;i<2*n;i++){
		if(msk[i])continue;
		bool can=false;
		int l=1;
		for(;l<(int)lst.length()&&l<(int)s[i].length();l++)
			if(s[i].substr(0,l)==lst.substr((int)lst.length()-l)){
				can=true;
				break;
			}
		if(can){
			msk[i]=true;
			ans=max(ans,(int)s[i].length()-l+dfs(msk,s[i]));
			msk[i]=false;
		}
	}
	return ans;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		s[n+i]=s[i];
	}
	char b;
	cin>>b;
	int ans=0;
	for(int i=0;i<n;i++)
		if(s[i][0]==b){
			bool msk[99]={};
			msk[i]=true;
			ans=max(ans,(int)s[i].length()+dfs(msk,s[i]));
		}
	cout<<ans;
	return 0;
}