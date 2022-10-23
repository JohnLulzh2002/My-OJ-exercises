#include<stdio.h>
#define gc()(is==it?it=(is=in)+fread(in,1,Q,stdin),(is==it?EOF:*is++):*is++)
typedef long long ll;
#define Q (1<<24)+1
char in[Q],*is=in,*it=in,c;
ll read(){
	ll n;
	for(n=0;(c=gc())<'0'||c>'9';);
	for(;c<='9'&&c>='0';c=gc())
		n=n*10+c-48;
	return n;
}
ll a[1000002],b[1000002];
int main(){
	ll n,m,i,j,min;
	n=read();m=read();
	if(m==1){
		printf("%lld\n",n);
		return 0;
	}
	for(i=0;i<m;i++)
		a[i]=read();
	min=a[0]+n-a[m-1];j=0;
	for(i=1;i<m;i++)
		if(min>a[i]-a[i-1])
			min=a[j=i]-a[i-1];
	if(j){
		for(i=0;i+j<m;i++)
			b[i]=a[i+j]-a[i+j-1];
		b[i]=a[0]+n-a[m-1];
		for(i++;i<m;i++)
			b[i]=a[i+j-m]-a[i+j-1-m];
	}
	else{
		b[0]=a[0]+n-a[m-1];
		for(i=1;i<m;i++)
			b[i]=a[i]-a[i-1];
	}
	ll l=b[0],r=n,mid;
	while(l<r){
		mid=(l+r)/2;
		ll d,c=mid-b[0];
		int t=0;
		for(i=0;i<m;i++){
			d=b[i];
			if(d<=c)
				c=mid-1;
			else{
				if(c+mid<d){
					t=1;
					break;
				}
				c=c+mid-d;
			}
		}
		// printf("*%lld\t%ld\n",mid,t);
		if(t)	l=mid+1;
		else	r=mid;
	}
	printf("%lld\n",l);
	return 0;
}