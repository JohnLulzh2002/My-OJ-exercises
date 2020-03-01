#include<stdio.h>
int main(){
	int n,d,a;
	scanf("%d",&n);
	for(d=180*n-360;n>1;n--){
		scanf("%d",&a);
		d-=a;
	}
	printf("%d",d);
	return 0;
}
