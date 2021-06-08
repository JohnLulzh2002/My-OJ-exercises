#include<stdio.h>
int main(){
	int n,ans=1;
	scanf("%d",&n);
	while(--n)
		ans=(ans+1)*2;
	printf("%d",ans);
	return 0;
}