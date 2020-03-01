#include <stdio.h>
int main(){
	int n;
	float x,s=0;
	for(scanf("%f%d",&x,&n);n>-1;n--){
		s=s*x+1;
	}
	printf("%.2f",s);
	return 0;
}