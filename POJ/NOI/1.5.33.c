#include <stdio.h>
int main(){
	int n;
	float p=2,a=1;
	scanf("%d",&n);
	for(;n>=p;p++){
		a+=(-1+(int)p%2*2)/p;
	}
	printf("%.4f",a);
	return 0;
}