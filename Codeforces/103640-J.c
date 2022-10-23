#include<stdio.h>
#include<stdlib.h>
typedef struct{
	long long pos,pair;
}Point;
int w,h;
long long f(long long x,long long y){
	if(y==0)
		return x;
	if(x==w)
		return w+y;
	if(y==h)
		return w+w+h-x;
	return w+w+h+h-y;
}
int cmp(const void*a,const void*b){
	Point *x=(Point*)a,*y=(Point*)b;
	if(x->pos<y->pos)
		return -1;
	return 1;
}
Point p[200005];
int stack[200005],top;
int main(){
	int i=0,n;
	scanf("%d%d%d",&w,&h,&n);
	while(n--){
		int x1,x2,y1,y2,a,b;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		a=x1==0||x1==w||y1==0||y1==h;
		b=x2==0||x2==w||y2==0||y2==h;
		if(a&&b){
			long long a,b;
			a=f(x1,y1);
			b=f(x2,y2);
			if(a>b)
			{a+=b;b=a-b;a-=b;}
			i++;
			p[2*i-2].pos=a;
			p[2*i-2].pair=i;
			p[2*i-1].pos=b;
			p[2*i-1].pair=-i;
		}
	}
	qsort(p,n=2*i,sizeof(Point),cmp);
	for(i=0;i<n;i++){
		int t=p[i].pair;
		if(t>0)
			stack[top++]=t;
		else if(stack[--top]+t!=0){
			printf("N\n");
			return 0;
		}
	}
	printf("Y\n");
	return 0;
}