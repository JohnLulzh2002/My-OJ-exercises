#include<stdio.h>
int main(){
	float a,b,r0,r;
	int n;
	scanf("%d%f%f",&n,&a,&b);
	for(r0=b/a;n>1;n--){
		scanf("%f%f",&a,&b);
		r=b/a;
		if(r>r0+0.05)printf("better\n");
		else if(r<r0-0.05)printf("worse\n");
		else printf("same\n");
	}
	return 0;
}
