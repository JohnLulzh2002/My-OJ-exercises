#include<stdio.h>
int main(){
	int t,a,b;
	for(scanf("%d",&t);t;t--){
		scanf("%d%d",&a,&b);
		printf("%d %d\n",a/b,a%b);
	}
	return 0;
}