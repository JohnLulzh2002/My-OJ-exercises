#include<iostream>
#include<string>
using namespace std;
string t,s;
int main(){
	cin>>t>>s;
	int i=0,ans=0;
	int lt=t.length(),ls=s.length();
	i=-1;
	while(!t.empty()){
		i=t.find(s,i+1);
		if(i==t.npos)break;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}