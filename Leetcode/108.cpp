#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0),left(nullptr),right(nullptr){}
	TreeNode(int x) : val(x),left(nullptr),right(nullptr){}
	TreeNode(int x,TreeNode* left,TreeNode* right) : val(x),left(left),right(right){}
};
class Solution{
	TreeNode* arrayLRToBST(vector<int>& nums,int l,int r){
		if(l>r)
			return NULL;
		if(l==r)
			return new TreeNode(nums[l],NULL,NULL);
		int m=(l+r)/2;
		return new TreeNode(nums[m],arrayLRToBST(nums,l,m-1),arrayLRToBST(nums,m+1,r));
	}
public:
	TreeNode* sortedArrayToBST(vector<int>& nums){
		return arrayLRToBST(nums,0,nums.size()-1);
	}
};
int main(){
	Solution s;
	// cout<<s.longestBalanced(v);
}