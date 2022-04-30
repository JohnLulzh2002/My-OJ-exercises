#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node* next;
	int data;
};
int nsize=sizeof(struct node);
int main(){
	int n,c=1,q=2;
	scanf("%d",&n);
	struct node *b=malloc(nsize);
	b->next=NULL;
	b->data=1;
	for(;c<n;q++){
		struct node *i=b;
		b=malloc(nsize);
		b->next=i;
		b->data=q;
		c++;
		while(c<n&&i->next!=NULL){
			struct node* t=i->next;
			i->next=malloc(nsize);
			i=i->next;
			i->next=t;
			i->data=q;
			c++;
			i=t;
		}
		if(c<n){
			i->next=malloc(nsize);
			i=i->next;
			i->next=NULL;
			i->data=q;
			c++;
		}
	}
	while(b->next){
		printf("%d ",b->data);
		b=b->next;
	}
	printf("%d\n",b->data);
	return 0;
}