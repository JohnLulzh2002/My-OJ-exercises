#include<stdio.h>
int main(){
	int k;
	long long a=0,b=1;
	scanf("%d",&k);
	if(k==0){
		printf("0.00");
		return 0;
	}
	for(;k>1;k--){
		b+=a;
		a=b-a;
	}
	printf("%.2f",(double)b);
	return 0;
}