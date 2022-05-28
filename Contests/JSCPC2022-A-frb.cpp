#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;
pair<string,string >a[1005];
map<string,set<string> > mp;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	bool flag=0;
	for(int i=0;i<n;i++){
		mp.clear();
		for(int j=i;j<n;j++){
			if(mp[a[j].first].count(a[j].second)==1)
				mp[a[j].first].clear();
			mp[a[j].first].insert(a[j].second);
			// cout<<mp[a[j].first].size()<<'\n';
			if(mp[a[j].first].size()==5){
				cout<<"PENTA KILL!\n";
				return 0;
			}
		}
	}
	cout<<"SAD:(\n";
}