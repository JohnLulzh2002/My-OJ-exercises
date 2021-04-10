#include<stdio.h>
int main(){
	int n,a;
	long long ans=0,b[404]={};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		a+=200;
		int i;
		for(i=0;i<402;i++)
			ans+=b[i]*(a-i)*(a-i);
		b[a]++;
	}
	printf("%lld",ans);
	return 0;
}