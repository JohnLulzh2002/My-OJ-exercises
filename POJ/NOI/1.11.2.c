#include<stdio.h>
double f(double x){
	return ((((x-15)*x+85)*x-225)*x+274)*x-121;
}
int main(){
	double l=1.5,r=2.4,m;
	while(r-l>0.0000001){
		m=(l+r)/2;
		if(f(m)>0)l=m;
		if(f(m)<0)r=m;
	}
	printf("%.6f",m);
	return 0;
}