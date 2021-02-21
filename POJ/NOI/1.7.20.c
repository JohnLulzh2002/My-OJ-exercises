#include<stdio.h>
#include<string.h>
int main(){
	char word[35];
	scanf("%s",word);
	int l=strlen(word);
	if(!strcmp(word+l-2,"er"))
		word[l-2]=0;
	if(!strcmp(word+l-2,"ly"))
		word[l-2]=0;
	if(!strcmp(word+l-3,"ing"))
		word[l-3]=0;
	printf(word);
	return 0;
}