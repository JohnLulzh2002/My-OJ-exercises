#include<stdio.h>
#include<queue>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	priority_queue<int,vector<int>,greater<int>> p;
	while(m--)p.push(0);
	while(n--){
		int w;
		scanf("%d",&w);
		p.push(p.top()+w);
		p.pop();
	}
	int ans=0;
	while(!p.empty()){
		ans=max(ans,p.top());
		p.pop();
	}
	printf("%d\n",ans);
	return 0;
}