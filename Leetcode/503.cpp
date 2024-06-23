class Solution{
public:
	stack<pair<int,int>> s;
	vector<int> nextGreaterElements(vector<int>& nums){
		vector<int> ans=nums;
		s.push({ nums[0], 0 });
		for(int i=1; i<nums.size(); i++){
			while(!s.empty()&&s.top().first<nums[i]){
				ans[s.top().second]=nums[i];
				s.pop();
			}
			s.push({ nums[i], i });
		}
		for(int i=0; i<nums.size(); i++){
			while(!s.empty()&&s.top().first<nums[i]){
				ans[s.top().second]=nums[i];
				s.pop();
			}
		}
		while(!s.empty()){
			ans[s.top().second]=-1;
			s.pop();
		}
		return ans;
	}
};