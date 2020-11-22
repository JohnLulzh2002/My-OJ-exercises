#include <bits/stdc++.h>
using namespace std;
int main(){
	int l;
	cin >> l;
	bool st[l];
	int n;
	cin >> n;
	int start;
	int end;
	for(int i=0 ; i<=l ; i++){
		st[i] = true;
	}
	for(int i = 0 ; i <n ; i++){
		cin >> start;
		cin >> end;
		for(int j = start ; j<=end ; j++){
			st[j] = false;
		}
	}
	int num = 0;
	for(int i=0 ; i<=l ; i++){
		if(st[i] == true){
			num++;
		}
	}
	cout << num;
	return 0;
}