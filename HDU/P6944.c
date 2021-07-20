#include<stdio.h>
#include<stdlib.h>
int cmp(void*a,void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,t,l[10]={},a[222222],c=0;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		qsort(a,n,sizeof(int),cmp);
		for(i=0;i<n;i++){
			if(a[i]%9)
				t=(a[i]-l[a[i]%9])/9;
			else
				t=(a[i]-1-l[0])/9;
			l[a[i]%9]+=t?9:0;
			c+=t%2;
		}
		if(c%2)	printf("A\n");
		else	printf("B\n");
	}
	return 0;
}