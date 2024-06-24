class Solution{
	int n,m;

public:
	vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& grid){
		m=grid.size();
		n=grid[0].size();
		array<int,5> p={ 1, 2, 4, 8, 16 };
		vector<int> rs;
		for(auto r:grid){
			int s=0;
			for(int i=0; i<n; i++)
				s+=r[i]*p[i];
			rs.push_back(s);
		}
		for(int i=0; i<m; i++){
			if(rs[i]==0)
				return { i };
			for(int j=i+1; j<m; j++)
				if((rs[i]&rs[j])==0)
					return { i, j };
		}
		rs.clear();
		return rs;
	}
};