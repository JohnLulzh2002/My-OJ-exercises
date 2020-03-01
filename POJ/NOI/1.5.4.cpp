#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	short n,a;
	int s=0;
	cin>>n;
	for(short i=0;n>i;i++){
		cin>>a;
		s+=a;
	}
	cout<<s<<' '<<setiosflags(ios::fixed)<<setprecision(5)<<double(s)/n;
	return 0;
}
