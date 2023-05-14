typedef struct ListNode* NodeP;
const int NodeSize=sizeof(struct ListNode);
NodeP addTwoNumbers(NodeP l1,NodeP l2){
	NodeP ans=malloc(NodeSize),p=ans;
	int t=l1->val+l2->val;
	l1=l1->next;
	l2=l2->next;
	p->val=t%10;
	t/=10;
	while(t||l1||l2){
		if(l1){
			t+=l1->val;
			l1=l1->next;
		}
		if(l2){
			t+=l2->val;
			l2=l2->next;
		}
		if(t||l1||l2)
			p=p->next=malloc(NodeSize);
		p->val=t%10;
		t/=10;
	}
	p->next=NULL;
	return ans;
}