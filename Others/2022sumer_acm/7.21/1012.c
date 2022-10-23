#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,ans,i,j;
		scanf("%lld",&n);
		ans=n/79205*217;
		n%=79205;
		for(i=216;i+1;i--)
			for(j=2554;j+1;j--)
				if((n-i*365-j*31)>=0&&
				(n-i*365-j*31)%7==0){
					ans+=(n-i*365-j*31)/7;
					ans+=j;
					ans+=i;
					n=0;
					goto hahaha;
				}
		hahaha:;
		if(n)
			printf("-1\n");
		else
			printf("%lld\n",ans);
	}
	return 0;
}