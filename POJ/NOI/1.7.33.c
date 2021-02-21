#include<stdio.h>
#include<string.h>
int main(){
	char word[102];
	scanf("%s",word);
	int l=strlen(word),i=0;
	for(;i*2<l;i++)
		if(word[i]-word[l-1-i]){
			printf("no");
			return 0;
		}
	printf("yes");
	return 0;
}