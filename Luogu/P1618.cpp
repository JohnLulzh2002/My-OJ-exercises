#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	bool t=true;
	int g,a,b,c,arr[]={1,2,3,4,5,6,7,8,9},d,e,f;
	cin>>a>>b>>c;
	g=__gcd(a,__gcd(b,c));
	a/=g;b/=g,c/=g;
	do{
		d=arr[0]*100+arr[1]*10+arr[2];
		e=arr[3]*100+arr[4]*10+arr[5];
		f=arr[6]*100+arr[7]*10+arr[8];
		if(!(d%a)&&!(e%b)&&!(f%c)&&d/a==e/b&&d/a==f/c){
			cout<<d<<' '<<e<<' '<<f<<endl;
			t=false;
		}
	}while(next_permutation(arr,arr+9));
	if(t)cout<<"No!!!";
	return 0;
}