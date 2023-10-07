class Solution{
public:
	vector<bool> kidsWithCandies(vector<int>& candies,int extraCandies){
		vector<bool> ans;
		int m=*max_element(candies.begin(),candies.end())-extraCandies;
		for(int&c:candies)
			ans.push_back(c>=m);
		return ans;
	}
};