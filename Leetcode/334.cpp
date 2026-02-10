#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
	bool increasingTriplet(vector<int>& nums){
		int a=INT_MAX,b=INT_MAX;
		for(int i : nums){
			if(i<=a)
				a=i;
			else if(i<=b)
				b=i;
			else
				return true;
		}
		return false;
	}
};
int main(){
	Solution s;
	vector<int> v{ 1,2,3,4,5 };
	cout<<s.increasingTriplet(v)<<endl;
}