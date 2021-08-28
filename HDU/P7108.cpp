#include<stdio.h>
#include<map>
using namespace std;
typedef pair<int,int> P;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		map<P,int> m;
		char s[100002];
		int n;
		scanf("%d%s",&n,s);
		P pos=make_pair(0,0);
		m.insert(make_pair(pos,1));
		for(int i=0;s[i];i++){
			switch(s[i]){
				case 'U':pos.first++;break;
				case 'D':pos.first--;break;
				case 'L':pos.second--;break;
				case 'R':pos.second++;
			}
			if(m.find(pos)==m.end())
				m[pos]=1;
			else
				m[pos]++;
		}
		long long ans=0,c;
		for(auto i:m){
			c=i.second;
			ans+=c*(c-1)/2;
		}
		printf("%lld\n",ans);
	}
	return 0;
}