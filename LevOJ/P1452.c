#include<stdio.h>
#define ls(p) (p<<1)
#define rs(p) ((p<<1)+1)
int tree[400000],lazy[400000],x,y,z;
void update(int p,int l,int r){
	if(r==l){
		if(lazy[p]+1)
			tree[p]=lazy[p];
		lazy[p]=-1;
		if(l>=x&&l<=y)
			tree[p]=z;
		return;
	}
	if(lazy[p]+1){
		tree[p]=(r-l+1)*lazy[p];
		lazy[ls(p)]=lazy[rs(p)]=lazy[p];
		lazy[p]=-1;
	}
	if(l>=x&&r<=y){
		tree[p]=(r-l+1)*z;
		lazy[ls(p)]=lazy[rs(p)]=z;
		return;
	}
	int m=(l+r)/2;
	update(ls(p),l,m);
	update(rs(p),m+1,r);
	tree[p]=tree[ls(p)]+tree[rs(p)];
}
int main(){
	int n,m;
	for(n=0;n<400000;n++)
		lazy[n]=-1;
	scanf("%d%d",&n,&m);
	while(m--){
		scanf("%d%d%d",&x,&y,&z);
		z--;
		update(1,1,n);
	}
	printf("%d",tree[1]+n);
	return 0;
}