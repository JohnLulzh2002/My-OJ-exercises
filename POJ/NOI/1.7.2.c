#include<stdio.h>
int main(){
	char s[100001];
	gets(s);
	int i,j,a;
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='0')continue;
		a=1;
		for(j=i+1;s[j]!='\0';j++)
			if(s[i]==s[j]){
				a=0;
				s[j]='0';
			}
		if(a){
			printf("%c",s[i]);
			return 0;
		}
	}
	printf("no");
	return 0;
}
