#include<stdio.h>
int main(){
	int a,b,n;
	while(scanf("%d",&n)==1){
		for(a=0;n;n--){
			scanf("%d",&b);
			a+=b;
		}
		printf("%d\n",a);
	}
	return 0;
}
