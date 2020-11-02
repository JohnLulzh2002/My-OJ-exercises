#include<stdio.h>
int main(){
	char ca[3],cb[3];
	int a,b;
	char c;
	scanf("%[^+-*/%]",ca);
	scanf("%c",&c);
	scanf("%s",cb);
	a=10*(ca[0]-'0')+(ca[1]-'0');
	b=10*(cb[0]-'0')+(cb[1]-'0');
	switch(c){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '%':
			printf("%d",a%b);
	}
	return 0;
}