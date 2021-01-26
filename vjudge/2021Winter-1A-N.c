#include<stdio.h>
#define MAX 100001
int main(){
	long long prime[10000]={};
	int primen=1;
	{
		int i,j;
		char a[MAX]={};
		for(i=2;i<MAX;i++){
			if(!a[i])
				prime[primen++]=i;
			for(j=1;j<primen&&prime[j]*i<MAX;j++)
				a[prime[j]*i]++;
		}
	}
	int t;
	scanf("%d",&t);
	while(t--){
		long long fact[30][2]={},i,n;
		scanf("%lld",&n);
		int j,factn=0;
		for(i=1;i<primen && prime[i]<=n;i++){
			int c=0;
			while(!(n%prime[i])){
				c++;
				n/=prime[i];
			}
			if(c){
				fact[factn][0]=prime[i];
				fact[factn][1]=c;
				factn++;
			}
		}
		if(i==primen){
			fact[factn][0]=n;
			fact[factn++][1]=1;
		}
		long long max=0,maxi,max0;
		for(i=0;i<factn;i++)
			if(fact[i][1]>max){
				max=fact[i][1];
				maxi=i;
				max0=fact[i][0];
			}
		printf("%d\n",max);
		for(i=0;i<max;i++){
			long long now=max0;
			for(j=0;j<factn;j++){
				if(j==maxi)continue;
				if(i+fact[j][1]>=max)
					now*=fact[j][0];
			}
			printf("%lld ",now);
		}
		printf("\n");
	}
	return 0;
}