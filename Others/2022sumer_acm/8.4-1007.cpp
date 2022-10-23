#include<stdio.h>
#include<unordered_map>
// #include<map>
using namespace std;
typedef long long ll;
int p;
int ksm(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1)
			ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
unordered_map<int,int> m;
// map<int,int> m;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		m.clear();
		int i,j,a,n,q,s[1005],d[1005],
			I=0,pow=1,inv[1005],ex0=0;
		scanf("%d%d%d%d",&p,&a,&n,&q);
		for(i=0;i<n;i++){
			scanf("%d%d",s+i,d+i);
			inv[i]=ksm(s[i],p-2);
			if(!s[i])ex0=1;
			if(d[i]>I)I=d[i];
		}
		m[1]=0;
		for(i=1;i<=I;i++){
			pow=(ll)pow*a%p;
			if(m.count(pow))
				break;
			m[pow]=i;
		}
		// for(auto k:m){
			// printf("$%d : %d\n",k.first,k.second);
		// } 
		for(i=0;i<q;i++){
			int ans=0,x;
			scanf("%d",&x);
			for(j=0;j<n;j++){
				int tmp=(ll)inv[j]*x%p;
				// printf("#%d\n",tmp);
				if(m.count(tmp)&&m[tmp]<=d[j])
					ans++;
				else if(ex0&&!x)
					ans++;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}