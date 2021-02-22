#include<stdio.h>
int main(){
	char a,b;
	scanf("%c",&a);
	int count=1;
	while(~scanf("%c",&b))
		if(a-b){
			printf("%d%c",count,a);
			a=b;
			count=1;
		}else
			count++;
	return 0;
}