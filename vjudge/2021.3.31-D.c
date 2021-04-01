#include<stdio.h>
#include<string.h>
#define MAX 100001
#define Max(a,b) (a>b?a:b)
long long a[3*MAX];
int data[MAX],mt[3*MAX];
void build(int l,int r,int p){
	if(l==r){
		mt[p]=a[p]=data[l];
		return;
	}
	int m=(l+r)/2;
	build(l,m,p*2);
	build(m+1,r,p*2+1);
	a[p]=a[p*2]+a[p*2+1];
	mt[p]=Max(mt[p*2],mt[p*2+1]);
}
long long query(int l,int r,int p,int ql,int qr){
	if(l>qr || r<ql)
		return 0;
	if(l>=ql && r<=qr)
		return a[p];
	int m=(l+r)/2;
	return query(l,m,p*2,ql,qr)+query(m+1,r,p*2+1,ql,qr);
}
void mod(int l,int r,int p,int ql,int qr,int x){
	if(l>qr || r<ql || mt[p]<x)
		return;
	if(l==r){
		mt[p]=a[p]%=x;
		return;
	}
	int m=(l+r)/2;
	mod(l,m,p*2,ql,qr,x);
	mod(m+1,r,p*2+1,ql,qr,x);
	a[p]=a[p*2]+a[p*2+1];
	mt[p]=Max(mt[p*2],mt[p*2+1]);
}
void set(int l,int r,int p,int k,int x){
	if(l>k || r<k)
		return;
	if(l==r){
		mt[p]=a[p]=x;
		return;
	}
	int m=(l+r)/2;
	set(l,m,p*2,k,x);
	set(m+1,r,p*2+1,k,x);
	a[p]=a[p*2]+a[p*2+1];
	mt[p]=Max(mt[p*2],mt[p*2+1]);
}
int main(){
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&data[i]);
	build(1,n,1);
	while(m--){
		int t,l,r,x,k;
		scanf("%d",&t);
		switch(t){
		case 1:
			scanf("%d%d",&l,&r);
			printf("%lld\n",query(1,n,1,l,r));
			break;
		case 2:
			scanf("%d%d%d",&l,&r,&x);
			mod(1,n,1,l,r,x);
			break;
		case 3:
			scanf("%d%d",&k,&x);
			set(1,n,1,k,x);
		}
	}
	return 0;
}