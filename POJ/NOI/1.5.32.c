#include <stdio.h>
int main(){
	int n;
	float p=1,q=2,a=2;
	scanf("%d",&n);
	for(;n>1;n--){
		q+=p;
		p=q-p;
		a+=q/p;
	}
	printf("%.4f",a);
	return 0;
}