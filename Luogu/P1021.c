#include<stdio.h>
int n,a[22]={1},ansa[22]={1},anss=1;
int dfs(int k){
	int dp[444][2]={},i,j,m;
	dp[0][0]=1;
	int c;
	for(i=0;i<444;i++){
		if(!dp[i][0]){
			if(i-1>anss){
				anss=i-1;
				for(j=0;a[j];j++)
					ansa[j]=a[j];
			}
			c=i-1;
			break;
		}
		if(dp[i][1]<n)
			for(j=0;a[j];j++)
				if(!dp[i+a[j]][0] || dp[i][1]+1<dp[i+a[j]][1])
					dp[i+a[j]][0]=1,
					dp[i+a[j]][1]=dp[i][1]+1;
	}
	if(!k)
		return c;
	m=0;
	for(j=0;a[j];j++);
	for(i=a[-1]+1;i<c+2;i++){
		a[j]=i;
		int d=dfs(k-1);
		m=d>m?d:m;
		a[j]=0;
	}
	return m;
}
int main(){
	int k,ans,i;
	scanf("%d%d",&n,&k);
	dfs(k-1);
	for(i=0;ansa[i];i++)
		printf("%d ",ansa[i]);
	printf("\nMAX=%d",anss);
	return 0;
}