#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int l,i;
	while(~scanf("%s",s)){
		l=strlen(s);
		for(i=0;i*2<l;i++)
			if(s[i]-s[l-i-1])
				l=0;
		if(l)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}