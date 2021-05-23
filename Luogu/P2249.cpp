#include<iostream>
#include<algorithm>
using namespace std;
int a[1000002];
int main(){
	int n,m,b,*t;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	while(m--){
		cin>>b;
		t=lower_bound(a,a+n,b);
		if((t-a)<n&&a[t-a]==b)
			cout<<(int)(t-a+1)<<' ';
		else
			cout<<-1<<' ';
	}
	return 0;
}