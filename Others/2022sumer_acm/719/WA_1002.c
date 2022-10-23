#include<stdio.h>
typedef struct{
	int x,y;
}Point;
void dfs(int x,int y,int map[17][17][4],int reach[17][17]){
	// printf("$%d\t%d\n",x,y);
	const int dx[]={-1,1,0,0},
		dy[]={0,0,-1,1};
	int i;
	for(i=0;i<4;i++){
		int xp=x+dx[i],yp=y+dy[i];
		// printf("#%d\t%d\n",xp,yp);
		if(!map[x][y][i]&&!reach[xp][yp]){
			reach[xp][yp]=1;
			dfs(xp,yp,map,reach);
		}
	}
	return;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,j,n,m,k,del[18]={-1},min;
		Point s,t,p1[18],p2[18];
		scanf("%d%d%d",&n,&m,&k);
		min=k;
		scanf("%d%d%d%d",&s.x,&s.y,&t.x,&t.y);
		for(i=0;i<k;i++)
			scanf("%d%d%d%d",&p1[i].x,&p1[i].y,&p2[i].x,&p2[i].y);
		while(!del[k]){
			del[0]++;
			for(i=0;i<17;i++){
				del[i+1]+=del[i]/2;
				del[i]%=2;
			}
			int x,y,sum=0,reach[17][17]={},
				map[17][17][4]={};//左右下上
			for(i=0;i<17;i++)
				sum+=del[i];
			printf("&%d\n",sum);
			for(i=0;i<n;i++)
				map[i][0][2]=map[i][m-1][3]=1;
			for(i=0;i<m;i++)
				map[0][i][0]=map[n-1][i][1]=1;
			if(sum>=min)continue;
			for(i=0;i<k;i++)
				if(!del[i])
				if(p1[i].x==p2[i].x){
					x=p1[i].x;
					if(p1[i].y>p2[i].y){
						p1[i].y+=p2[i].y;
						p2[i].y=p1[i].y-p2[i].y;
						p1[i].y-=p2[i].y;
					}
					for(j=p1[i].y;j<=p2[i].y;j++){
						map[x][j][0]=1;
						if(x)map[x-1][j][1]=1;
					}
				}else{
					y=p1[i].y;
					if(p1[i].x>p2[i].x){
						p1[i].x+=p2[i].x;
						p2[i].x=p1[i].x-p2[i].x;
						p1[i].x-=p2[i].x;
					}
					for(j=p1[i].x;j<=p2[i].x;j++){
						map[j][y][2]=1;
						if(y)map[j][y-1][3]=1;
					}
				}
			x=s.x,y=s.y;
			reach[x][y]=1;
			// for(int ttt=0;ttt<4;ttt++){
			// 	printf("@%d\n",ttt);
			// 	for(i=0;i<n;i++){
			// 		for(j=0;j<m;j++)
			// 			printf("%d ",map[i][j][ttt]);
			// 		putchar('\n');
			// 	}
			// }
			for(i=0;i<n;i++){
				for(j=0;j<m;j++)
					printf("%d ",reach[i][j]);
				putchar('\n');
			}
			dfs(x,y,map,reach);
			if(reach[t.x][t.y]&&sum<min)
				min=sum;
		}
		printf("%d\n",min);
	}
	return 0;
}