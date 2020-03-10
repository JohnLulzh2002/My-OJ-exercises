#include<stdio.h>
int main(){
	int x,y;
	char c;
	scanf("%d %d %c",&x,&y,&c);
	switch(c){
		case '+':printf("%d",x+y);break;
		case '-':printf("%d",x-y);break;
		case '*':printf("%d",x*y);break;
		case '/':
			if(y)printf("%d",x/y);
			else printf("Divided by zero!");break;
		default:printf("Invalid operator!");
	}
	return 0;
}