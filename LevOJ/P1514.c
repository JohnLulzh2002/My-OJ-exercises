#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=90)
		puts("优");
	else if(n>=80)
		puts("良");
	else if(n>=70)
		puts("中");
	else if(n>=60)
		puts("及格");
	else
		puts("不及格");
	return 0;
}