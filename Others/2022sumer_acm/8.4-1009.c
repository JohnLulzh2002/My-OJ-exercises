#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int X0,X1,X2,X3,x0,x1,x2,x3,
			Y0,Y1,Y2,Y3,y0,y1,y2,y3;
		scanf("%d%d%d%d%d%d%d%d",
			&X0,&Y0,&X1,&Y1,
			&X2,&Y2,&X3,&Y3);
		scanf("%d%d%d%d%d%d%d%d",
			&x0,&y0,&x1,&y1,
			&x2,&y2,&x3,&y3);
		double a1=X3-x3,b1=X0-X3-x0+x3,
			c1=X2-X3-x2+x3,a2=Y3-y3,
			b2=Y0-Y3-y0+y3,c2=Y2-Y3-y2+y3,
			m=(c1*a2-a1*c2)/(b1*c2-c1*b2),
			n=(b1*a2-a1*b2)/(c1*b2-b1*c2),
			x=X3+m*(X0-X3)+n*(X2-X3),
			y=Y3+m*(Y0-Y3)+n*(Y2-Y3);
		printf("%lf %lf\n",x,y);
		// printf("#%lf %lf\n",m,n);
	}
	return 0;
}