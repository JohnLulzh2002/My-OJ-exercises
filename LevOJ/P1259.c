#include<stdio.h>
int root(int n){
	int a;
	while(n){
		a+=n%10;
		n/=10;
	}
	if(a<10)return a;
	return root(a);
}
int main(){
	int n;
	while(scanf("%d",&n)){
		if(!n)break;
		printf("%d\n",root(n));
	}
	return 0;
}