class StockSpanner{
	int r=0;
public:
	vector<int> p,a;
	StockSpanner(){
		p.clear();
		a.clear();
	}
	int next(int price){
		int ans=1,l=r-1;
		while(l>=0&&p[l]<=price){
			ans+=a[l];
			l-=a[l];
		}
		p.push_back(price);
		a.push_back(ans);
		r++;
		return ans;
	}
};