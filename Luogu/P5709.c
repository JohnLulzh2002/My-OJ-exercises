#include <stdio.h>
int main(){
	int m,t,s,o;
	scanf("%d%d%d",&m,&t,&s);
	if(!t){printf("0");return 0;}
	o=s/t;
	if(s%t)o++;
	printf("%d",m>o?m-o:0);
	return 0;
}