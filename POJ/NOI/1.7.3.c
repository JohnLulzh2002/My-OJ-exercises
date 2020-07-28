#include<stdio.h>
int main(){
	char a[501],b[501];
	float p;
	scanf("%f %s %s",&p,&a,&b);
	int i,s=0;
	for(i=0;a[i]!='\0';i++)if(a[i]==b[i])s++;
	if((float)s/i<p)printf("no");
	else printf("yes");
	return 0;
}
