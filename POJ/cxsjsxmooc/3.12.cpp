#include <iostream>
using namespace std;

struct A{
	int v;
	A(int vv) :v(vv){}

	const A* getPointer()const{
		return this;
	}

};

int main(){
	const A a(10);
	const A* p=a.getPointer();
	cout<<p->v<<endl;
	return 0;
}