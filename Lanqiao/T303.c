#include<stdio.h>
long long comb(int n,int k){
	long long ans=1;
	int i;
	for(i=0;i<k;i++){
		ans*=n-i;
		ans/=i+1;
	}
	return ans;
}
int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	if(m<n)
		printf("0");
	else if(!n)
		printf("1");
	else
		printf("%lld",comb(m+n,n-1)*(m-n+1)/n);
	return 0;
}