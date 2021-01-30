#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char name[10];
	int num,score,p;
}stu;
int cmp(const void* b,const void* a){
	int t;
	if(t=((stu*)a)->score-((stu*)b)->score)
		return t;
	if(t=((stu*)a)->p-((stu*)b)->p)
		return t;
	return ((stu*)a)->num-((stu*)b)->num;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		stu a[100];
		int q,w,e,i;
		for(i=0;i<n;i++){
			scanf("%s%d%d%d%d",a[i].name,&a[i].num,&q,&w,&e);
			a[i].score=q+w+e;
			a[i].p=q;
		}
		qsort(a,n,sizeof(stu),cmp);
		for(i=0;i<5;i++)
			printf("%s %d %d\n",a[i].name,a[i].num,a[i].score);
	}
	return 0;
}