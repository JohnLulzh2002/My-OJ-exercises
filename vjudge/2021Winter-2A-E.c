#include<stdio.h>
int a[1000000],data[200001];
int max(int a,int b)
{return a>b?a:b;}
void build(int l,int r,int p){
	if(l==r){
		a[p]=data[l];
		return;
	}
	int m=(l+r)/2;
	build(l,m,p*2);
	build(m+1,r,p*2+1);
	a[p]=max(a[p*2],a[p*2+1]);
}
int query(int l,int r,int p,int ql,int qr){
	if(l>qr || r<ql)
		return 0;
	if(l>=ql && r<=qr)
		return a[p];
	int m=(l+r)/2;
	return max(query(l,m,p*2,ql,qr),query(m+1,r,p*2+1,ql,qr));
}
int main(){
	int n,m,i;
	while(~scanf("%d%d",&n,&m)){
		for(i=1;i<=n;i++)
			scanf("%d",&data[i]);
		build(1,n,1);
		while(m--){
			char op;
			scanf("%*c%c",&op);
			if(op=='Q'){
				int l,r;
				scanf("%d%d",&l,&r);
				printf("%d\n",query(1,n,1,l,r));
			}else{
				int pos,new,p,l,r;
				scanf("%d%d",&pos,&new);
				//find p
				p=1;l=1;r=n;
				while(l-r){
					int m=(l+r)/2;
					if(m<pos){
						p=p*2+1;
						l=m+1;
					}else{
						p*=2;
						r=m;
					}
				}
				//update
				a[p]=new;
				do{
					p/=2;
					a[p]=max(a[p*2],a[p*2+1]);
				}while(p);
			}
		}
	}
	return 0;
}