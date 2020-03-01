#include <stdio.h>
int main(){
	int n,a=1,s=1,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		a*=i;
		s+=a;
	}
	printf("%d",s);
	return 0;
}