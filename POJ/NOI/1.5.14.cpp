#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	short n;
	double x;
	for(cin>>x>>n;n>0;n--)x*=1.001;
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<x;
	return 0;
}
