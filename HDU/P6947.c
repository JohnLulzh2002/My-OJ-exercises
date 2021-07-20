#include<stdio.h>
#define Max(a,b) ((a)>(b)?(a):(b))
struct Node{
	int data;
	struct Node *prev,*next;
};
struct Node t[111111],*left[111111],*right[111111];
void read(struct Node*p,int dir,struct Node*end){
	printf(" %d",p->data);
	if(p==end)return;
	if(dir){
		if((p->next)->next!=p)
			read(p->next,1,end);
		else
			read(p->next,0,end);
	}else{
		if((p->prev)->prev!=p)
			read(p->prev,0,end);
		else
			read(p->prev,1,end);
	}
}
int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		int i,a,b,count[111111];
		for(i=1;i<=n;i++){
			t[i].data=i;
			t[i].prev=t[i].next=NULL;
			left[i]=right[i]=t+i;
			count[i]=1;
		}
		while(m--){
			scanf("%d%d",&a,&b);
			if(left[a]==NULL)continue;
			count[b]+=count[a];
			count[a]=0;
			if(left[b]==NULL){
				left[b]=right[a];
				right[b]=left[a];
				left[a]=right[a]=NULL;
			}else
			if(right[b]->next==NULL){
				right[b]->next=right[a];
				if(right[a]->next==NULL)
					right[a]->next=right[b];
				else
					right[a]->prev=right[b];
				right[b]=left[a];
				left[a]=right[a]=NULL;
			}else{
				right[b]->prev=right[a];
				if(right[a]->next==NULL)
					right[a]->next=right[b];
				else
					right[a]->prev=right[b];
				right[b]=left[a];
				left[a]=right[a]=NULL;
			}
		}
		for(i=1;i<=n;i++)
			if(left[i]==NULL)
				printf("0\n");
			else{
				printf("%d",count[i]);
				read(right[i],1,left[i]);
				printf("\n");
			}
	}
	return 0;
}