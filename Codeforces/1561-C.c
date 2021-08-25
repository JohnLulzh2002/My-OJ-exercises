#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) ((a)>(b)?(a):(b))
struct K{int m,c;};
int cmp(const void*a,const void*b)
{return ((struct K*)a)->m-((struct K*)b)->m;}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		struct K ks[100002];
		int i=n;
		while(i--){
			scanf("%d",&ks[i].c);
			int j=0,a;
			ks[i].m=0;
			for(;j<ks[i].c;j++){
				scanf("%d",&a);
				a-=j;
				ks[i].m=Max(ks[i].m,a);
			}
		}
		qsort(ks,n,sizeof(struct K),cmp);
		int ans=1,p=0;
		for(i=0;i<n;i++){
			if(p<ks[i].m){
				ans+=ks[i].m-p;
				p=ks[i].m;
			}
			p+=ks[i].c;
		}
		printf("%d\n",ans);
	}return 0;
}