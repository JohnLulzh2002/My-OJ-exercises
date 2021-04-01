#include<stdio.h>
#include<stdlib.h>
#define MAX 100002
int a[MAX],b[MAX],c[MAX];
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmp);
	for(i=0;i<n-1;i++)
		scanf("%d",&b[i]);
	qsort(b,n-1,sizeof(int),cmp);
	int t=1;
	for(i=0;i<n-1;i++)
		if(a[i]!=b[i]){
			printf("%d\n",a[i]);
			t=0;
			break;
		}
	if(t)printf("%d\n",a[i]);
	t=1;
	for(i=0;i<n-2;i++)
		scanf("%d",&c[i]);
	qsort(c,n-2,sizeof(int),cmp);
	for(i=0;i<n-2;i++)
		if(b[i]!=c[i]){
			printf("%d\n",b[i]);
			t=0;
			break;
		}
	if(t)printf("%d\n",b[i]);
	return 0;
}