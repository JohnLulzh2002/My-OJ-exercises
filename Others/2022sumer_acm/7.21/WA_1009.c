#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long p,q,e,r,i,m;
		scanf("%lld%lld%lld",&p,&q,&e);
		m=p*q-1;
		int tmp=0,ans=0;
		for(i=2;i*i<=m;i++)
			if(m%i==0){
				if(i>e&&i>p&&i>q){
					if(!ans)
						ans=e*q%i;
					else if(ans!=e*q%i)
						goto nonono;
					tmp=1;
				}
				m/=i;
				i--;
			}
		if(tmp)
			printf("%d\n",ans);
		else if(m>e&&m>p&&m>q&&!(ans>0&&ans!=e*q%m))
			printf("%d\n",e*q%m);
		else{
			nonono:;
			printf("shuanQ\n");
		}
	}
	return 0;
}