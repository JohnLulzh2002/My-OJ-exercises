#include<stdio.h>
int main(){
	char a[11],b;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",a+1,a+2,a+3,a+4,a+5,a+6,a+7,a+8,a+9,a+10);
	int s=0,i=1;
	for(;i<10;i++)s+=(a[i]-'0')*i;
	s%=11;
	if(s-10)b=s+'0';
	else	b='X';
	if(a[10]-b)
		printf("%c-%c%c%c-%c%c%c%c%c-%c",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],b);
	else
		printf("Right");
	return 0;
}