#include<stdio.h>
#include<string.h>
char s[100006];
int main(){
	scanf("%s",s);
	int i=3,l=strlen(s);
	if(l<3){
		printf(s);
		return 0;
	}
	printf("%c%c",s[0],s[1]);
	for(i=2;s[i];i++){
		putchar(s[i]);
		if(s[i-2]=='c'&&s[i-1]=='j'&&s[i]=='b')
			putchar(',');
	}
	return 0;
}