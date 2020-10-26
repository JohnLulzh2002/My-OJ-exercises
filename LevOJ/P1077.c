#include<stdio.h>
int main(){
	double a,b,s;
	int n,i;
	while(scanf("%d",&n)==1){
		a=1;b=2;s=0;i=1;
		for(;n;n--){
			s+=i*b/a;
			i*=-1;
			b+=a;
			a=b-a;
		}
		printf("%.4f\n",s);
	}
	return 0;
}