#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=90)
		puts("��");
	else if(n>=80)
		puts("��");
	else if(n>=70)
		puts("��");
	else if(n>=60)
		puts("����");
	else
		puts("������");
	return 0;
}