#include<stdio.h>
int main(){
	int n,m,i,j,map[100][100];
	while(~scanf("%d%d",&n,&m)){
		for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&map[i][j]);
		i=1;j=1;
		while(n-i||m-j){
			printf("(%d,%d)>",i,j);
			if(i-n&&map[i+1][j])i++;
			else if(j-m&&map[i][j+1])
				j++;
		}
		printf("(%d,%d)\n",n,m);
	}
	return 0;
}