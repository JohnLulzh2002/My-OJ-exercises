#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int T,n,m,a[100002],b[100002],i,j,l,ans;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		for(i=0;i<m;i++)
			scanf("%d",b+i);
		qsort(a,n,sizeof(int),cmp);
		qsort(b,m,sizeof(int),cmp);
		ans=l=i=0;
		for(j=0;j<m;j++){
			for(;i<n&&a[i]<b[j];i++)
				l++;
			if(l>ans)ans=l;
			l=0;
			for(;i<n&&a[i]==b[j];i++);
			if(i==n)break;
		}
		if(ans<n-i)ans=n-i;
		if(ans)
			printf("%d\n",ans);
		else
			printf("Impossible\n");
	}
	return 0;
}