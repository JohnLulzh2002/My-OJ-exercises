#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int tail,head,weight;
}Edge;
int cmp(const void*a,const void*b)
{return ((Edge*)a)->weight - ((Edge*)b)->weight;}
int main(){
	int n;
	Edge edges[77];
	while(scanf("%d",&n),n){
		int i,edgeNum=0,ans=0;
		for(i=1;i<n;i++){
			char chr;
			int k;
			while(scanf("%c",&chr),!(chr>='A'&&chr<='Z'));
			scanf("%d",&k);
			int a=chr-'A',b,w;
			while(k--){
				while(scanf("%c",&chr),!(chr>='A'&&chr<='Z'));
				scanf("%d",&w);
				b=chr-'A';
				edges[edgeNum].tail=a;
				edges[edgeNum].head=b;
				edges[edgeNum++].weight=w;
			}
		}
		qsort(edges,edgeNum,sizeof(Edge),cmp);
		int a[30];
		for(i=0;i<n;i++)a[i]=i;
		for(i=0;i<edgeNum;i++){
			if(a[edges[i].head]-a[edges[i].tail]){
				ans+=edges[i].weight;
				int h=a[edges[i].head],
					t=a[edges[i].tail],j;
				for(j=0;j<n;j++)
					if(a[j]==h)	a[j]=t;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}