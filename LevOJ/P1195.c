#include<stdio.h>
int main(){
	int n,ans;
	while(~scanf("%d",&n)){
		ans=1;
		while(--n)
			ans=(ans+1)*2;
		printf("%d\n",ans);
	}
	return 0;
}