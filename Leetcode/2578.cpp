class Solution{
	vector<int> d;
public:
	int splitNum(int num){
		while(num){
			if(num%10)
				d.push_back(num%10);
			num/=10;
		}
		sort(d.begin(),d.end());
		int ans=0,p=1;
		while(!d.empty()){
			ans+=*d.rbegin()*p;
			d.pop_back();
			if(!d.empty()){
				ans+=*d.rbegin()*p;
				d.pop_back();
			}
			p*=10;
		}
		return ans;
	}
};