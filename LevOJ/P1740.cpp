#include<stdio.h>
#include<set>
#define MAXN 5005
using namespace std;
typedef long long ll;
ll x[MAXN],y[MAXN];
ll fd(const int i,const int j){
	return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		ll ans=0,d,dis[MAXN];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%lld%lld",x+i,y+i);
		set<int> rest;
		for(int i=1;i<n;i++){
			dis[i]=fd(i,0);
			rest.insert(i);
		}
		while(!rest.empty()){
			int mini;
			ll mind=9e18;
			for(int i:rest)
				if(dis[i]<mind)
					mind=dis[mini=i];
			if(mind>ans)ans=mind;
			rest.erase(mini);
			for(int i:rest){
				d=fd(i,mini);
				if(dis[i]>d)dis[i]=d;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}