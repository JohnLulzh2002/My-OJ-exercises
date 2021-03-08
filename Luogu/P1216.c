#include<stdio.h>
#define Max(a,b) ((a)>(b)?(a):(b))
int a[1001][1001];
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
	n--;
	while(n--)
		for(i=0;i<=n;i++)
			a[n][i]+=Max(a[n+1][i],a[n+1][i+1]);
	printf("%d",a[0][0]);
	return 0;
}