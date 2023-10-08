class Solution{
	vector<int> l;
public:
	vector<int> productExceptSelf(vector<int>&nums){
		int c=1;
		for(int d:nums){
			l.push_back(c);
			c*=d;
		}
		c=1;
		for(int i=nums.size();i;i--){
			l[i-1]*=c;
			c*=nums[i-1];
		}
		return l;
	}
};