#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) (((a)>(b))?(a):(b))
typedef struct ttt{
	int l,r;
}section;
int cmp(const void* pa,const void* pb){
	section a=*(section*)pa,b=*(section*)pb;
	return a.l-b.l;
}
section a[1000000];
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,l,r;
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i].l,&a[i].r);
		qsort(a,n,sizeof(section),cmp);
		l=a[0].l;
		r=a[0].r;
		for(i=1;i<n;i++){
			if(a[i].l>=r){
				printf("%d %d\n",l,r);
				l=a[i].l;
				r=a[i].r;
			}else
				r=Max(r,a[i].r);
		}
		printf("%d %d\n\n",l,r);
	}
	return 0;
}