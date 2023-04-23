#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int q,a,b;
}s;
int cmp(const void*n,const void*m){
	return ((s*)n)->q - ((s*)m)->q;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,ta,tb;
		s p[1005];
		for(i=0;i<n;i++)
			scanf("%d",&p[i].a);
		for(i=0;i<n;i++)
			scanf("%d",&p[i].b);
		for(i=0;i<n;i++){
			if(p[i].a<p[i].b)
				p[i].q=-1e9+p[i].a;
			else if(p[i].a>p[i].b)
				p[i].q=1e9-p[i].b;
			else
				p[i].q=0;
		}
		qsort(p,n,sizeof(s),cmp);
		ta=p[0].a;
		tb=ta+p[0].b;
		for(i=1;i<n;i++){
			ta+=p[i].a;
			if(tb<ta)tb=ta;
			tb+=p[i].b;
		}
		printf("%d\n",tb);
	}
	return 0;
}