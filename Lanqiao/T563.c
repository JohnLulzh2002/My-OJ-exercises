#include<stdio.h>
int main(){
	int a[101][101],count[101][101]={},sum[101][101]={},n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	int s=0;
	for(i=n-1;i>-1;i--){
		s+=a[i][0];
		sum[i][0]=s;
		count[i][0]=1;
	}
	for(i=n-1;i>-1;i--)for(j=1;j<n;j++){
		sum[i][j]=sum[i][j-1]+a[i][j];
		count[i][j]=count[i][j-1];
		if(i<n-1 && sum[i+1][j]>sum[i][j-1]){
			sum[i][j]=sum[i+1][j]+a[i][j];
			count[i][j]=count[i+1][j];
		}
		if(i<n-1 && sum[i+1][j]==sum[i][j-1])
			count[i][j]+=count[i+1][j];
	}
	printf("%d %d",count[0][n-1],sum[0][n-1]);
	return 0;
}