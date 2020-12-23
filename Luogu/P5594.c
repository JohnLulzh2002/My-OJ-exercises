#include<stdio.h>
int a[1005][1001]={};
int main(){
	int n,m,k,i,j,x,count;
	scanf("%d%d%d",&n,&m,&k);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			scanf("%d",&x);
			a[x][j]++;
		}
	for(i=1;i<=k;i++){
		count=0;
		for(j=0;j<m;j++)
			if(a[i][j])
				count++;
		printf("%d ",count);
	}
	return 0;
}