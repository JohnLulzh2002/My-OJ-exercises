#include<stdio.h>
char a[100000002]={};
int prime[1000000]={};
int main(){
	int n,q,i,j,k=1;
	scanf("%d%d",&n,&q);
	for(i=2;i<n;i++){
		if(!a[i])
			prime[k++]=i;
		for(j=1;j<k&&prime[j]*i<=n;j++)
			a[prime[j]*i]++;
	}
	while(q--){
		scanf("%d",&k);
		printf("%d\n",prime[k]);
	}
	return 0;
}