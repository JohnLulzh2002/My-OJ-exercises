#include<stdio.h>
int main(){
	char s[101];
	int i=0;	
	for(scanf("%[^\n]",s);s[i+1]-0;i++)
		printf("%c",s[i]+s[i+1]);
	printf("%c",s[0]+s[i]);
	return 0;
}
