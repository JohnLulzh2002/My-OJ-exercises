#include<stdio.h>
int main(){
	char a[102],q;
	int i=0;
	scanf("%[^\n]",a);
	for(;a[i];i++){
		q=a[i];
		if(q>='a'&&q<='z')q+='Z'-'z';
		printf("%c",q);
	}
	return 0;
} 
