#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int r=n,l=(n+2)/2,
			ans=r-l+1;
		l=(n+8)/6*2-1;
		if(n%2)	r=n;
		else	r=n-1;
		ans+=(r-l)/2+1;
		printf("%d\n",ans);
	}
	return 0;
}