#include<stdio.h>
#include<set>
struct node{
	int l,r;
};
struct cmp1{bool operator()(const node&a,const node&b){return a.r<b.r;}};
struct cmp2{bool operator()(const node&a,const node&b){return a.l<b.l;}};
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		multiset<node,cmp1> s,todo;
		multiset<node,cmp2> t;
		int i,n,k;
		node p;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d%d",&p.l,&p.r);
			s.insert(p);
			t.insert(p);
		}
		while(!s.empty()){
			p=*s.begin();
			s.erase(p);
			t.erase(p);
			todo.erase(p);
			int l=p.l,r=p.r;
			for(auto i=s.begin();i->r==r;i++){
				//
			}
			//
		}
	}
	return 0;
}