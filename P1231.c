#include<stdio.h>
int main(){
	int a,i,c[27];
	char s[256];
	while(scanf("%s",&s)==1){
		for(i=25;i;i--)c[i]=0;
		for(i=0;s[i];i++)
			c[s[i]-'a']++;
		for(i=0;i<26;i++)
			if(c[i]==1)
				printf("%c",'a'+i);
		printf("\n");
	}
	return 0;
}
