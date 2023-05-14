class Solution{
public:
	int maxTotalFruits(vector<vector<int>>& fruits,int startPos,int k){
		int a[200005]={};
		startPos++;
		for(auto i:fruits)
			a[i[0]+1]=i[1];
		for(int i=1;i<200005;i++)
			a[i]+=a[i-1];
		int ans=0;
		//- - | = >
		int l=startPos-k,r=startPos;
		while(l<=startPos){
			ans=max(ans,a[min(r,200004)]-a[max(l-1,0)]);
			l+=2;r+=1;
		}
		//< = | - -
		l=startPos,r=startPos+k;
		while(r>=startPos){
			ans=max(ans,a[min(r,200004)]-a[max(l-1,0)]);
			l-=1;r-=2;
		}
		return ans;
	}
};