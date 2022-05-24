#include<stdio.h>
#define int long long
double fp(double a,int b){
	double ans=1;
	while(b){
		if(b&1)
			ans*=a;
		a*=a;
		b>>=1;
	}
	return ans;
}
int n,m;
double q,ans;
double f(int x){
	return (x*n+m)/(1-fp(q,x));
}
signed main(){
	int t,p,i,l,r;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld%lld",&n,&m,&p);
		q=(10000-p)/10000.0;
		ans=1e20;
		int l=1,r=1000000,delta,m1,m2;
		while(l<r-2){
			delta=(r-l)/3,m1=l+delta,m2=l+2*delta;
			double f1=f(m1),f2=f(m2);
			if(f1>f2)
				l=m1;
			else if(f1<f2)
				r=m2;
			else{
				l=m1;
				r=m2;
			}
		}
		if(f(l)<ans)ans=f(l);
		if(f(l+1)<ans)ans=f(l+1);
		if(f(l+2)<ans)ans=f(l+2);
		if(f(m1)<ans)ans=f(m1);
		if(f(m2)<ans)ans=f(m2);
		if(f(r)<ans)ans=f(r);
		printf("%lf\n",ans);
	}
	return 0;
}