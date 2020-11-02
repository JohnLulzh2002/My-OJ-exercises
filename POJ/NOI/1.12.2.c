#include<stdio.h>
int main(){
	int n,l,s=0;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&l);
		s+=(l-1)/70+1;
	}
	printf("%.1f",(float)s/10);
	return 0;
}