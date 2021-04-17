#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,ans=1;
	cin>>n;
	vector<pair<int,int> > vec;
	vector<pair<int,int> >::iterator it;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if((it=find(vec.begin(),vec.end(),make_pair(a,b)))!=vec.end())
			continue;
		ans++;
		vector<pair<float,float> > points;
		for(it=vec.begin();it!=vec.end();it++)
			if((it->first)!=a){
				int c=it->first,d=it->second;
				float x=(float)(d-b)/(a-c),y=a*x+b;
				if(find(points.begin(),points.end(),make_pair(x,y))==points.end()){
					ans++;
					points.push_back(make_pair(x,y));
				}
			}
		vec.push_back(make_pair(a,b));
	}
	cout<<ans<<endl;
	return 0;
}