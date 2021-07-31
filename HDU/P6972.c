#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[111111];
		scanf("%s",s);
		if(strstr(s,"114514"))
			printf("AAAAAA\n");
		else
			printf("Abuchulaile\n");
	}
	return 0;
}