#include<stdio.h>
#include<string.h>
int main(){
	int i,n,l;
	char s[101],sp[100];
	while(~scanf("%d",&n)){
		scanf("%s",s);
		l=strlen(s);
		strcpy(sp,s);
		sp[l-2]=0;
		if(strcmp(&s[2],sp)==0){
			printf("NO\n");
			continue;
		}
		printf("%s%c%c\n",&s[2],s[1],s[0]);
	}
	return 0;
}