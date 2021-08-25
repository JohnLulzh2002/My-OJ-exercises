#include<stdio.h>
long long f[400000],s[400000];
int main(){
	int n,m,i;
	scanf("%d%d",&n,&m);
	f[1]=s[1]=1;
	for(i=2;i<=n;i++){
		f[i]=s[i-1];
		int l=2,r=0;
		for(;l<=i;l=r+1){
			r=i/(i/l);
			f[i]+=(r-l+1)*f[i/l];
		}
		s[i]=(f[i]+s[i-1])%m;
	}
	printf("%d\n",f[n]%m);
}