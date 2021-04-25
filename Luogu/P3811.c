#include<stdio.h>
long long inv[3000001];
int main(){
	int i,n,p;
	scanf("%d%d",&n,&p);
	inv[1]=1;
	printf("1\n");
	for(i=2;i<=n;i++){
		inv[i]=(p-p/i)*inv[p%i]%p;
		printf("%lld\n",inv[i]);
	}
	return 0;
}