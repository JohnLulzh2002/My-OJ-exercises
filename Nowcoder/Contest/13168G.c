#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define Max(a,b) a>b?a:b
int cmp(const void*a,const void*b){
	double t=*(double*)b-*(double*)a;
	return t>0?1:0;
}
int main(){
	int n,i,j;
	double p[101];
	double dp[101][101];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int in;
		scanf("%d",&in);
		p[i]=in*0.01;
	}
	qsort(&p[1],n,sizeof(double),cmp);
	dp[0][0]=1;
	for(i=1;i<=n;i++){
		dp[i][0]=dp[i-1][0]*(1-p[i]);
		for(j=1;j<i;j++)
			dp[i][j]=dp[i-1][j]*(1-p[i])
				+dp[i-1][j-1]*p[i];
		dp[i][i]=dp[i-1][i-1]*p[i];
	}
	double ans=0;
	for(i=1;i<=n;i++){
		double now=0;
		for(j=1;j<=i;j++)
			now+=dp[i][j]*pow(j,(double)j/i);
		// if(now<ans)break;
		// ans=now;
		ans=Max(ans,now);
	}
	printf("%.9f",ans);
	return 0;
}