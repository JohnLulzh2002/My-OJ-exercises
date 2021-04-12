#include<stdio.h>
void output(int n){
	if(n==1){
		printf("2(0)");
		return;
	}
	if(n==2){
		printf("2");
		return;
	}
	int a[22]={},i,t=0;
	for(i=0;n;i++){
		a[i]=n%2;
		n/=2;
	}
	for(;i>1;i--){
		if(a[i]){
			if(t)printf("+");
			t=1;
			printf("2(");
			output(i);
			printf(")");
		}
	}
	if(a[1]){
		if(t)printf("+");
		t=1;
		printf("2");
	}
	if(a[0]){
		if(t)printf("+");
		t=1;
		printf("2(0)");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	output(n);
	return 0;
}