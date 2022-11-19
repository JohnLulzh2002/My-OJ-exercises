#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,d;
	while(~scanf("%lf%lf%lf",&a,&b,&c)){
		if(a==0)
			puts("不是一元二次方程");
		else if((d=b*b-4*a*c)<0)
			printf("%.2f+%.2fi %.2f%.2fi\n",-b/2/a,sqrt(-d)/2/a,-b/2/a,-sqrt(-d)/2/a);
		else
			printf("%.2f %.2f\n",(-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
	}
	return 0;
}