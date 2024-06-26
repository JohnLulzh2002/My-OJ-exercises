class Solution{
	int n,m;
	vector<int> rs;
public:
	vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& grid){
		m=grid.size();
		n=grid[0].size();
		for(auto r:grid){
			rs.push_back(0);
			for(int i=0; i<n; i++)
				rs.back()|=r[i]<<i;
			
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