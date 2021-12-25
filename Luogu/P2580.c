#include<stdio.h>
#include<stdlib.h>
#ifndef __cplusplus
#include<stdbool.h>
#endif
typedef struct _Node{
	char data;
	bool isTail,vis;
	struct _Node* son,* fa,* bro;
}Node;
Node* root;
Node* newNode(){
	Node* p=malloc(sizeof(Node));
	p->bro=p->fa=p->son=NULL;
	p->isTail=p->vis=false;
	return p;
}
void insert(char* s){
	Node* p=root;
	for(int i=0;s[i];i++){
		if(!p->son){
			p->son=newNode();
			p->son->fa=p;
			p=p->son;
			p->data=s[i];
			continue;
		}
		Node* q=p->son;
		for(;q->bro;q=q->bro){
			if(q->data==s[i]){
				p=q;
				break;
			}
		}
		if(q->data!=s[i]){
			q->bro=newNode();
			q->bro->fa=p;
			p=q->bro;
			p->data=s[i];
		}
		else
			p=q;
	}
	p->isTail=true;
}
char find(char* s){
	Node* p=root;
	for(int i=0;s[i];i++){
		p=p->son;
		while(p->data!=s[i]&&p->bro!=NULL)
			p=p->bro;
		if(p->data!=s[i])
			return false;
	}
	if(p->isTail){
		if(p->vis)
			return 2;
		p->vis=true;
		return 1;
	}
	return false;
}
int main(){
	root=newNode();
	int n;
	scanf("%d",&n);
	char s[55];
	while(n--){
		scanf("%s",s);
		insert(s);
	}
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		switch(find(s)){
		case 0:	puts("WRONG");	break;
		case 1:	puts("OK");		break;
		case 2:	puts("REPEAT");	break;
		}
	}
	return 0;
}