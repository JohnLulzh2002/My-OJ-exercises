#include<stdio.h>
int main(){
	int n,a[100][100],i,j,s,dir;
	char c;
	const int step[4][2]={
		{1,0},{0,-1},{-1,0},{0,1}},
		next[4]={1,2,3,0};
	while(~scanf("%d",&n)){
		for(i=0;i<n+2;i++)
			a[0][i]=a[n+1][i]
			=a[i][0]=a[i][n+1]=1;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				a[i][j]=0;
		i=1;j=n;
		dir=0;
		for(s=1;s<=n*n;s++){
			a[i][j]=s;
			if(a[i+step[dir][0]][j+step[dir][1]])
				dir=next[dir];
			i+=step[dir][0];
			j+=step[dir][1];
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
	}
	return 0;
}