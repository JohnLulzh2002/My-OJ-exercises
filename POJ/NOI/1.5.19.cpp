#include<stdio.h>
#include<math.h>
int main(){
	float s=0,a,b;
	int h,n;
	for(scanf("%d",&n);n>0;n--){
		scanf("%f%f%d",&a,&b,&h);
		s+=2*sqrtf(a*a+b*b)/50+1.5*h;
	}
	printf("%d",int(ceil(s)));
	return 0;
}
