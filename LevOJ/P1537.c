#include<stdio.h>
int max(int a,int b)
{return a>b?a:b;}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n,a[100001],i;
		scanf("%d%d",&m,&n);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		a[0]=m-a[0];
		a[1]=m-a[1];
		for(i=2;i<n;i++){
			a[i]=max(a[i-2],a[i-1])-a[i];
			if(a[i]<0)a[i]=0;
		}
		if(a[n-1]>0)
			printf("%d\n",a[n-1]);
		else
			puts("Can't get the top!");
	}
	return 0;
}