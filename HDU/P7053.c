#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double p,q;
		scanf("%lf%lf",&p,&q);
		if(p<=q)
			printf("N0 M0R3 BL4CK 1CE TEA!\n");
		else
			printf("ENJ0Y YOURS3LF!\n");
	}
	return 0;
}