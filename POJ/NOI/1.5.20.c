#include <stdio.h>
int main(){
	double s,a;
	scanf("%lf",&s);
	a=s;
	for(short i=9;i>0;i--){
		a+=s;
		s/=2;
	}
	s/=2;
	printf("%g\n%g",a,s);
	return 0;
}