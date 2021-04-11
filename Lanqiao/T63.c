#include<stdio.h>
void output(int n){
	if(!n)return;
	output(n-1);
	printf("%c",'A'-1+n);
	output(n-1);
}
int main(){
	int n,i;
	scanf("%d",&n);
	output(n);
	return 0;
}