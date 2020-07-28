#include<stdio.h>
int main(){
	char s[256];
	gets(s);
	int i,n=0;
	for(i=0;s[i]!='\0';i++)if(s[i]>'/' & s[i]<':')n++;
	printf("%d",n);
	return 0;
}
