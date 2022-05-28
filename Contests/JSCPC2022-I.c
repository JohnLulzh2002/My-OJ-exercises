#include<string.h>
#include<stdio.h>
char s[100004];
int main(){
	scanf("%s",s);
	int n=strlen(s),i,c[28]={},cnt=0;
	for(i=0;s[i];i++)
		c[s[i]-'a']++;
	for(i=0;i<26;i++)
		if(c[i])cnt++;
	if(cnt==1)
		printf("%d\n",n-1);
	else
		printf("0\n");
}