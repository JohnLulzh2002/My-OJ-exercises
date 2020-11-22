#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){a^=b;b^=a;a^=b;}
	if(a>c){a^=c;c^=a;a^=c;}
	if(b>c){c^=b;b^=c;c^=b;}
	if(a+b<=c)printf("Not triangle");
	else{
		a*=a;b*=b;c*=c;
		if(a+b>c)printf("Acute triangle");
		if(a+b==c)printf("Right triangle");
		if(a+b<c)printf("Obtuse triangle");
		if(a==b||b==c)printf("\nIsosceles triangle");
		if(a==b&&b==c)printf("\nEquilateral triangle");
	}
	return 0;
}