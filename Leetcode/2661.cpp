class Solution{
public:
	int firstCompleteIndex(vector<int>& arr,vector<vector<int>>& mat){
		const int R=mat.size(),C=mat[0].size(),S=arr.size();
		map<int,pair<int,int>> m;
		vector<int> r(R,0),c(C,0);
		for(int i=0;i<R;i++)for(int j=0;j<C;j++)
			m[mat[i][j]]={i,j};
		for(int i=0;i<S;i++){
			auto a=m[arr[i]];
			r[a.first]++;
			c[a.second]++;
			if(r[a.first]==C||c[a.second]==R)
				return i;
		}
		return -1;
	}
};