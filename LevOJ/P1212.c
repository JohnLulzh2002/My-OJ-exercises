#include<stdio.h>
int main(){
	int a,b,n,ans;
	while(~scanf("%d%d%d",&a,&b,&n)){
		ans=1;
		while(b--)
			ans*=a;
		printf("%d\n",ans%n);
	}
	return 0;
}