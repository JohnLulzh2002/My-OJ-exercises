#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int i,j,n,a[10],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)	a[i]=i+1;
	do{
		for(i=0;i<n;i++)
			printf("%5d",a[i]);
		printf("\n");
		t=0;
		for(i=n-1;i;i--)
			if(a[i-1]<a[i]){
				t=1;
				for(j=n-1;a[j]<a[i-1];j--);
				a[j]+=a[i-1];
				a[i-1]=a[j]-a[i-1];
				a[j]-=a[i-1];
				qsort(a+i,n-i,sizeof(int),cmp);
				break;
			}
	}while(t);
	return 0;
}