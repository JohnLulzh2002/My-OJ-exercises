#include<stdio.h>
int main(){
	int k,a=0,b=1;
	for(scanf("%d",&k);k>1;k--){
		b+=a;
		a=b-a;
	}
	printf("%d",b);
	return 0;
}
