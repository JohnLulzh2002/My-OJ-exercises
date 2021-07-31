#include <iostream>
using namespace std;
int&
getElement(int* a,int i){
	return a[i];
}
int main(){
	int a[]={ 1,2,3 };
	getElement(a,1)=10;
	cout<<a[1];
	return 0;
}