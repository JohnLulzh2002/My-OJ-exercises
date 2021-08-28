#include <iostream>
using namespace std;
class A{
public:
	int val;
	A(int

	x){
		val=x;
	}
	A(const A&x){
		val=x.val;
	}
	A(){
		val=123;
	}
	A& GetObj(){
		return *this;
	}

};
int main(){
	int m,n;
	A a;
	cout<<a.val<<endl;
	while(cin>>m>>n){
		a.GetObj()=m;
		cout<<a.val<<endl;
		a.GetObj()=A(n);
		cout<<a.val<<endl;
	}
	return 0;
}