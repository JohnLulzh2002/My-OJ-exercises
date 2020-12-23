#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data,pos;
	struct Node *next,*last;
};
typedef struct Node node;
const int Size=sizeof(node);
int dir=0,n,k,a[1000001],i;
int cmp(int a,int b){
	if(a==b)return 0;
	if(dir){
		if(a>b)return -1;
		if(a<b)return 1;
	}
	if(a<b)return -1;
	if(a>b)return 1;
}
node* insert(node*p){
	if(a[i]==p->data){
		p->pos=i;
		return p;
	}
	while(cmp(a[i],p->data)<0&&p->last){
		p=p->last;
		free(p->next);
		p->next=NULL;
	}
	if(cmp(a[i],p->data)>0){
		p->next=malloc(Size);
		p->next->last=p;
		p=p->next;
	}
	p->data=a[i];
	p->pos=i;
	p->next=NULL;
	return p;
}
node* delete(node*p){
	while(p->next&&p->pos<=i-k){
		p=p->next;
		free(p->last);
		p->last=NULL;
	}
	return p;
}
int main(){
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	node *head,*tail;
	tail=head=malloc(Size);
	for(dir=0;dir<2;dir++){
		head->last=head->next=NULL;
		head->pos=0;
		head->data=a[0];
		for(i=1;i<k;i++){
			head=insert(head);
		}
		printf("%d",tail->data);
		for(;i<n;i++){
			head=insert(head);
			tail=delete(tail);
			printf(" %d",tail->data);
		}
		printf("\n");
		while(head!=tail){
			tail=tail->next;
			free(tail->last);
		}
	}
	return 0;
}