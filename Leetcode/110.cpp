#include<iostream>
#include<vector>
#include<unordered_set>
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
	pair<int,bool>height(TreeNode* p){
		if(p==NULL)
			return{ 0,true };
		int l,r;
		bool lb,rb;
		tie(l,lb)=height(p->left);
		tie(r,rb)=height(p->right);
		if(lb&&rb&&abs(l-r)<2)
			return{ max(l,r)+1,true };
		else
			return{ -1,false };
	}
public:
	bool isBalanced(TreeNode* root){
		return height(root).second;
	}
};
int main(){
	Solution s;
	vector<int> v{ 2,5,4,3 };
	// cout<<s.longestBalanced(v);
}