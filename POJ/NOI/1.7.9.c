#include<stdio.h>
#include<string.h>
int main(){
	char b,a[82];
	gets(a);
	int l,i=0;
	for(l=strlen(a);i<l;i++){
		b=a[i];
		if((b>='a'&&b<'z')||(b>='A'&&b<'Z'))a[i]++;
		else if(b=='Z')a[i]='A';
		else if(b=='z')a[i]='a';
	}
	puts(a);
	return 0;
}
