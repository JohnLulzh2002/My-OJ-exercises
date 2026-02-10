#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution{
public:
	int longestBalanced(vector<int>& nums){
		int ans=0;
		for(int i=0;i<nums.size()-1;i++){
			unordered_set<int> c[2];
			for(int j=i;j<nums.size();j++){
				c[nums[j]%2].insert(nums[j]);
				if(c[0].size()==c[1].size())
					ans=max(ans,j-i+1);
			}
		}
		return ans;
	}
};
int main(){
	Solution s;
	vector<int> v{ 2,5,4,3 };
	cout<<s.longestBalanced(v);
}