#include<stdio.h>
int main(){
	int n,m=0,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		m=m>a?m:a;
	}
	printf("%d",m);
	return 0;
}