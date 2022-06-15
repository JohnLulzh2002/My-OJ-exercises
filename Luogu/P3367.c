#include<stdio.h>
int fa[1000005];
int f(int x){
	if(fa[x]==x)return x;
	return fa[x]=f(fa[x]);
}
int main(){
	int n,m,z,x,y,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		fa[i]=i;
	while(m--){
		scanf("%d%d%d",&z,&x,&y);
		if(z==1)
			fa[f(x)]=f(y);
		else
			if(f(x)==f(y))
				printf("Y\n");
			else
				printf("N\n");
	}
	return 0;
}