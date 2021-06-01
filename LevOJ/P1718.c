#include<stdio.h>
#define MAX 3222
char notP[MAX];
int prime[MAX+2];
int main(){
	int i,j,c=0,n;
	for(i=2;i<MAX;i++){
		if(!notP[i])
			prime[c++]=i;
		for(j=0;prime[j]&&prime[j]*i<MAX;j++)
			notP[i*prime[j]]=1;
	}
	scanf("%d",&n);
	while(n--){
		int k,f[50]={},cf=0;
		scanf("%d",&k);
		for(i=0;prime[i]&&k>1;i++)
			while(k%prime[i]==0){
				k/=prime[i];
				f[cf++]=prime[i];
			}
		if(k>1){
			printf("%d\n",k);
			continue;
		}
		int ans=1;
		for(i=2;i<MAX;i++){
			if(!f[0])
				break;
			ans=i;
			int t=i;
			for(j=0;f[j];j++)
				if(t%f[j]==0){
					t/=f[j];
					int k;
					for(k=j;f[k];k++)
						f[k]=f[k+1];
					j--;
				}
		}
		printf("%d\n",ans);
	}
	return 0;
}