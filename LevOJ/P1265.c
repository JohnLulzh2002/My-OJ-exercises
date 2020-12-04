#include<stdio.h>
#include<math.h>
int main(){
	int n,in;
	double a,i;
	scanf("%d",&n);
	while(n--){
		a=0;
		scanf("%d",&in);
		for(i=2;i<=in;i++)
			a+=log10(i);
		printf("%d\n",(int)a+1);
	}
	return 0;
}