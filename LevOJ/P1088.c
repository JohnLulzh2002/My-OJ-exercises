#include<stdio.h>
int main(){
	int a,b,m,n;
	for(scanf("%d",&m);m;m--){
		scanf("%d",&n);
		for(a=0;n;n--){
			scanf("%d",&b);
			a+=b;
		}
		printf("%d\n",a);
	}
	return 0;
}
