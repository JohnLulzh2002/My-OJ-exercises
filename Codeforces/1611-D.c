#include<stdio.h>
#define MAX 300000
int b[MAX],p[MAX],c[MAX],d[MAX],T;
int main(){
	scanf("%d",&T);
	while(T--){
		int n,root,pd=1;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",b+i);
			if(b[i]==i)
				root=i;
		}
		for(int i=1;i<=n;i++)
			scanf("%d",p+i);
		if(p[1]!=root){
			printf("-1\n");
			continue;
		}
		c[root]=0;
		for(int i=2;i<=n;i++)
			c[p[i]]=i-1;
		for(int i=1;i<=n;i++){
			if(root==i)d[i]=0;
			if(c[i]-c[b[i]]<0)
				pd=0;
			else
				d[i]=c[i]-c[b[i]];
		}
		if(pd==0){
			printf("-1\n");
			continue;
		}
		for(int i=1;i<n;i++)
			printf("%d ",d[i]);
		printf("%d\n",d[n]);
	}
}
