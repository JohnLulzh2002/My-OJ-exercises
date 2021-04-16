#include<stdio.h>
void exgcd(int a,int b,int*x,int*y){
	if(b==0){
		*x=1;*y=0;
		return;
	}
	int n,m;
	exgcd(b,a%b,&n,&m);
	*x=m;
	*y=n-a/b*m;
}
int rev(int n,int mod){
	int a,b;
	exgcd(n,mod,&a,&b);
	return (a+mod)%mod;
}
int main(){
	int n,m,p,i,fac[60001]={1};
	scanf("%d%d%d",&n,&m,&p);
	if(m*2>n)m=n-m;
	long long ans=1;
	for(i=0;i<m;i++){
		ans*=n-i;
		ans%=p;
		ans*=rev(i+1,p);
		ans%=p;
	}
	printf("%lld",ans);
	return 0;
}