class Solution{
public:
	int hardestWorker(int n,vector<vector<int>>& logs){
		int t=0,m=0;
		for(auto&i:logs){
			int &a=i[0],&b=i[1];
			if(b-t>m){
				m=b-t;
				n=a;
			}else if(b-t==m&&n>a)
				n=a;
			t=b;
		}
		return n;
	}
};