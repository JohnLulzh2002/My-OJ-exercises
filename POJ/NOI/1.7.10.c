#include<stdio.h>
int main(){
	char a[201],t;
	int i=0;
	for(scanf("%[^\n]",a);a[i];i++){
		t=a[i];
		if(t>'E'&&t<='Z')printf("%c",t-5);
		else if(t>='A'&&t<'F')printf("%c",t+21);
		else printf("%c",t);
	}
	return 0;
}
