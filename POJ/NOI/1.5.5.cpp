#include<stdio.h>
int main(){
	int n,a,m=0;
	for(scanf("%d",&n);n>0;n--){
		scanf("%d",&a);
		if(a>m)m=a;
	}
	printf("%d",m);
	return 0;
}
