#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,n,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	n=-b/2/a;
	if(n==0)n=1e-7;
	d=b*b-4*a*c;
	if(d==0)printf("x1=x2=%.5f",n);
	else if(d<0){
		d=sqrt(-d)/2/a;
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",n,d,n,d);
	}
	else{
		d=sqrt(d)/2/a;
		printf("x1=%.5f;x2=%.5f",n+d,n-d);
	}
	return 0;
}