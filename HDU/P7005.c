#include<stdio.h>
#include<stdlib.h>
#define Max(a,b) (((a)>(b)?(a):(b)))
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,n,k,a[100002],min,ans=1;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		qsort(a,n,sizeof(int),cmp);
		min=a[0]-k;
		for(i=1;i<n;i++){
			if(a[i]+k<=min)continue;
			min=Max(min+1,a[i]-k);
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}