#include<stdio.h>
#define Max(a,b) ((a)>(b)?(a):(b))
int r,c,a[101][101],max[101][101];
int dfs(int x,int y){
	if(max[x][y])return max[x][y];
	const int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
	int d,xp,yp,t=0;
	for(d=0;d<4;d++)if((xp=x+dx[d])>-1&&xp<r
		&&(yp=y+dy[d])>-1&&yp<c
		&&a[xp][yp]<a[x][y]&&dfs(xp,yp)>t){
		t=dfs(xp,yp)+1;
	}
	if(!t)return max[x][y]=1;
	return max[x][y]=t;
}
int main(){
	int i,j,ans=0;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)for(j=0;j<c;j++)
		ans=Max(dfs(i,j),ans);
	printf("%d",ans);
	return 0;
}