#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
long long ans;
int a[1000060],T;
int main(){
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		scanf("%d",&a[i]);
	}
	for(int i=2;i<=T;i++){
		ans+=max(a[i],a[i-1]);
	}
	cout<<ans<<endl;
}