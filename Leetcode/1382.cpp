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
		int m=(l+r)/2;
		return new TreeNode(nums[m],arrayLRToBST(nums,l,m-1),arrayLRToBST(nums,m+1,r));
	}
	TreeNode* sortedArrayToBST(vector<int>& nums){
		return arrayLRToBST(nums,0,nums.size()-1);
	}
	void BSTToArray(TreeNode* p,vector<int>& arr){
		if(p==NULL) return;
		BSTToArray(p->left,arr);
		arr.push_back(p->val);
		BSTToArray(p->right,arr);
	}
public:
	TreeNode* balanceBST(TreeNode* root){
		vector<int> arr;
		BSTToArray(root,arr);
		return sortedArrayToBST(arr);
	}
};
int main(){
	Solution s;
	// cout<<s.longestBalanced(v);
}