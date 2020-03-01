#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,s=0;
	for(short i=0;i<12;i++){
		cin>>a;
		s+=a/12;
	}
	cout<<'$'<<setiosflags(ios::fixed)<<setprecision(2)<<s;
	return 0;
}
