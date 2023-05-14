class Solution{
	list<int> c[100005];
	stack<pair<int,int>> todo;
public:
	int numOfMinutes(int n,int headID,vector<int>& manager,vector<int>& informTime){
		int ans=0;
		for(int i=0;i<n;i++){
			if(i==headID)continue;
			c[manager[i]].push_back(i);
		}
		todo.push({headID,0});
		while(!todo.empty()){
			auto a=todo.top();
			int i=a.first,j=a.second;
			todo.pop();
			if(j>ans)ans=j;
			for(int k:c[i])
				todo.push({k,j+informTime[i]});
		}
		return ans;
	}
};