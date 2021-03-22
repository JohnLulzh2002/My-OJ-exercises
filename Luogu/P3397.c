#include<stdio.h>
int a[1001][1001];
int main(){
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	while(m--){
		int x1,x2,y1,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		for(i=x1;i<=x2;i++)
			for(j=y1;j<=y2;j++)
				a[i][j]++;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}