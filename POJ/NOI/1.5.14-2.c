#include<stdio.h>
int main(){
	int n;
	double x;
	for(scanf("%lf%d",&x,&n);n>0;n--)
		x*=1.001;
	printf("%.4f",x);
	return 0;
}
