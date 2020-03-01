#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float n,a,s=0;
	cin>>n;
	for(short i=0;i<n;i++){
		cin>>a;
		s+=a/n;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<s;
	return 0;
}
