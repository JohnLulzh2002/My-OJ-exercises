#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int k,x0,y0,xl,yl,xr,yr;
		scanf("%d%d%d%d%d%d%d",&k,&x0,&y0,&xl,&yl,&xr,&yr);
		double ans=(4*k-10+3*pow(0.5,k-2));
		ans*=(xr-x0)*(y0-yl);
		printf("%.3lf\n",ans);
	}
	return 0;
}