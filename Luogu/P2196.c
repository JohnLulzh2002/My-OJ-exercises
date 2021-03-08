#include<stdio.h>
int main(){
	int n,mine[22],next[22]={},a[22][22],i,j,ans=0,ansi;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&mine[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=n-2;i>-1;i--){
		int m=mine[i];
		for(j=1;j<n-i;j++)
			if(a[i][j-1]&&mine[i]+mine[i+j]>m){
				m=mine[i]+mine[i+j];
				next[i]=i+j;
			}
		mine[i]=m;
		if(m>ans){
			ansi=i;
			ans=m;
		}
	}
	printf("%d ",ansi+1);
	while(ansi=next[ansi])
		printf("%d ",ansi+1);
	printf("\n%d",ans);
	return 0;
}