#include<stdio.h>
#include<string.h>
int main(){
	char word[555];
	int l;
	while(~scanf("%s",word)){
		l=strlen(word);
		while(l--)
			printf("%c",word[l]);
		char c[100];
		scanf("%[ ]",c);
		printf(c);
	}
	return 0;
}