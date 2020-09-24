#include<stdio.h>
int main(){
	char a[102],q;
	int i=0;
	scanf("%[^\n]",a);
	for(;a[i];i++){
		q=a[i];
		if(q>='a'&&q<='z')q+='Z'-'z';
		else if(q>='A'&&q<='Z')q+='z'-'Z';
		printf("%c",q);
	}
	return 0;
} 
