#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution{
public:
	vector<vector<int>> findDifference(vector<int>& nums1,vector<int>& nums2){
		vector<vector<int>> ans{ {},{} };
		unordered_set<int> s1,s2;
		for(int i : nums1)
			s1.insert(i);
		for(int i : nums2)
			s2.insert(i);
		for(int i : s1)
			if(!s2.count(i))
				ans[0].push_back(i);
		for(int i : s2)
			if(!s1.count(i))
				ans[1].push_back(i);
		return ans;
	}
};
int main(){
	Solution s;
	vector<int> nums1{ 1,2,3 },nums2{ 2,4,6 };
	auto ans=s.findDifference(nums1,nums2);
	for(auto i:ans){
		for(int j : i)
			cout<<j<<' ';
		cout<<endl;
	}
}