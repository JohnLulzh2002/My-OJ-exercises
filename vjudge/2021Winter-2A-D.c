#include<stdio.h>
#include<string.h>
#define MAX 50001
int a[3*MAX],data[MAX];
void build(int l,int r,int p){
	if(l==r){
		a[p]=data[l];
		return;
	}
	int m=(l+r)/2;
	build(l,m,p*2);
	build(m+1,r,p*2+1);
	a[p]=a[p*2]+a[p*2+1];
}
int query(int l,int r,int p,int ql,int qr){
	if(l>qr || r<ql)
		return 0;
	if(l>=ql && r<=qr)
		return a[p];
	int m=(l+r)/2;
	return query(l,m,p*2,ql,qr)+query(m+1,r,p*2+1,ql,qr);
}
int main(){
	int t,T;
	scanf("%d",&T);
	for(t=1;t<=T;t++){
		printf("Case %d:\n",t);
		int n,i;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			scanf("%d",&data[i]);
		build(1,n,1);
		char op[8];
		while(scanf("%s",op),op[0]-'E'){
			int i,j;
			scanf("%d%d",&i,&j);
			if(op[0]=='Q')
				printf("%d\n",query(1,n,1,i,j));
			else{
				int p=1,l=1,r=n;
				if(op[0]=='S')j=-j;
				while(l-r){
					a[p]+=j;
					int m=(l+r)/2;
					if(m<i){
						p=p*2+1;
						l=m+1;
					}else{
						p*=2;
						r=m;
					}
				}
				a[p]+=j;
			}
		}
	}
	return 0;
}