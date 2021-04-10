#include<stdio.h>
#define Min(a,b) (a<b?a:b)
long long a[22];
int sep[22],n;
long long calc(){
	int l=0,r=a[0],i;
	for(i=0;i<n-1;i++)
		if(sep[i]){
			l^=r;
			r=a[i+1];
		}
		else
			r|=a[i+1];
	return l^r;
}
int main(){
	int i;
	long long ans,size=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		size*=2;
	}
	ans=calc();
	size/=2;
	while(size--){
		for(sep[i=n-2]++;sep[i]>1;i--){
			sep[i]=0;
			sep[i-1]++;
		}
		ans=Min(ans,calc());
	}
	printf("%lld",ans);
	return 0;
}