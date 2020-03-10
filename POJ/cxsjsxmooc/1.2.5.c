#include <stdio.h>
int main(){
	int h;
	double r;
	scanf("%d%lf",&h,&r);
	h=20000/(3.14159*h*r*r)+1;
	printf("%d",h);
	return 0;
}