#include<stdio.h>
#include<stdlib.h>
#define MaxM 1000001
#define MaxN 100001
typedef struct tPair{
	int a,b;
}Pair;
Pair e[MaxM];
int cmp(const void* px,const void* py){
	Pair x=*(Pair*)px,y=*(Pair*)py;
	if(x.a>y.a)	return 1;
	if(x.a<y.a)	return -1;
	return x.b-y.b;
}
typedef struct tEdge{
	int to;
	struct tEdge* next;
}Edge;
typedef struct tVertex{
	int data;
	Edge* edges;
}Vertex;
Vertex v[MaxN];
char vis1[MaxN],vis2[MaxN];
int n,m;
void dfs(int n){
	if(vis1[n])
		return;
	vis1[n]=1;
	printf("%d ",v[n].data);
	Edge* p=v[n].edges;
	while(p->next){
		dfs(p->to);
		p=p->next;
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
		scanf("%d%d",&e[i].a,&e[i].b);
	qsort(e+1,m,sizeof(Pair),cmp);
	//build
	for(int i=1;i<=n;i++){
		v[i].data=i;
		v[i].edges=malloc(sizeof(Edge));
		v[i].edges->next=NULL;
	}
	for(int i=1;i<=m;i++){
		int a=e[i].a,b=e[i].b;
		Edge* p=v[a].edges;
		while(p->next)
			p=p->next;
		p->to=b;
		p=p->next=malloc(sizeof(Edge));
		p->next=NULL;
	}
	//dfs
	dfs(1);
	putchar('\n');
	//bfs
	int queue[MaxN]={1},l=0,r=1;
	vis2[1]=1;
	for(;l<r;l++){
		printf("%d ",v[queue[l]].data);
		Edge* p=v[queue[l]].edges;
		for(;p->next;p=p->next){
			if(vis2[p->to])
				continue;
			vis2[p->to]=1;
			queue[r++]=p->to;
		}
	}
	putchar('\n');
	return 0;
}