#include<cstdio>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
struct Show{
	int l,r,score,stage;
}s[1005];
int dp[2005][1030];
int main(){
	int n,m,i,j,c=0;
	set<int> ts;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		while(m--){
			scanf("%d%d%d",&s[c].l,
				&s[c].r,&s[c].score);
			s[c].stage=i;
			ts.insert(s[c].l);
			ts.insert(s[c++].r);
		}
	}
	map<int,int> o2d;
	j=0;
	for(auto i:ts)
		o2d.insert({i,j++});
	// for(auto i:o2d)
	// 	printf("#%d\t%d\n",i.first,i.second);
	for(i=0;i<c;i++){
		s[i].l=o2d[s[i].l];
		s[i].r=o2d[s[i].r];
	}
	// for(i=0;i<c;i++)
	// 	printf("%d\t%d\t%d\t%d\n",s[i].l,s[i].r,s[i].score,s[i].stage);
	map<int,vector<Show>> l2n;
	for(i=0;i<c;i++)
		if(l2n.find(s[i].l)!=l2n.end())
			l2n[s[i].l].push_back(s[i]);
		else{
			vector<Show> t;
			t.push_back(s[i]);
			l2n[s[i].l]=t;
		}
	int po2[11]={1};
	for(i=0;i<n;i++)
		po2[i+1]=2*po2[i];
	for(i=0;i<2001;i++) for(j=0;j<po2[n];j++){
		if(l2n.find(i)!=l2n.end())
			for(Show k:l2n[i]) if(j==0||dp[i][j]){
				// printf("i: %d -> %d	j: %d -> %d	dp: %d -> %d ? %d\n",i,k.r,j,j|po2[k.stage],dp[i][j],dp[k.r][j|po2[k.stage]],dp[i][j]+k.score);
				dp[k.r][j|po2[k.stage]]=max(dp[k.r][j|po2[k.stage]],dp[i][j]+k.score);
			}
		dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
	}
	if(dp[2000][po2[n]-1])
		printf("%d\n",dp[2000][po2[n]-1]);
	else
		printf("-1\n");
	return 0;
}