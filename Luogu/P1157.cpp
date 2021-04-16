#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main(){
	int n,r,use[24]={};
	cin>>n>>r;
	while(r--)
		use[r]=1;
	do{
		for(int i=0;i<n;i++)
			if(use[i])cout<<setw(3)<<i+1;
		cout<<endl;
	}while(prev_permutation(use,use+n));
	return 0;
}