#include<stdio.h>
#include<string.h>
char s[502];
int palindrome(int l,int r){
	int i=0;
	for(;i<r-l;i++)
		if(s[l+i]-s[r-1-i])
			return 0;
	for(;l<r;l++)printf("%c",s[l]);
	printf("\n");
}
int main(){
	scanf("%s",s);
	int l=strlen(s);
	int i,j;
	for(i=2;i<=l;i++)for(j=0;j<=l-i;j++)
		palindrome(j,i+j);
	return 0;
}