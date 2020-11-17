#include<stdio.h>
int main(){
	double a,b,ans;
	while(~scanf("%lf%lf",&a,&b)){
		ans=a*b;
		printf("%.5f\n",ans-(int)ans);
	}
	return 0;
}