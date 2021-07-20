#include<stdio.h>
#define MAX 11000000
char nP[MAX];
int prime[MAX/6];
long long ans[MAX];
int main(){
	int i,j,pc=0;
	for(i=2;i<MAX;i++){
		if(!nP[i])prime[pc++]=i;
		for(j=0;j<pc&&i*prime[j]<MAX;j++)
			nP[i*prime[j]]=1;
	}
	ans[2]=0;
	for(i=3;i<MAX;i++){
		ans[i]=ans[i-1]+i;
		if(!nP[i])ans[i]+=i;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",ans[n]);
	}
	return 0;
}