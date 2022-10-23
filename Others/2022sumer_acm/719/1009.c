#include<stdio.h>
int n,c[100004][4];
int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d%d",&c[i][0],&c[i][1]);
			c[i][0]*=2;
			c[i][1]*=2;
			c[i][2]=c[i][0]+c[i][1];
			c[i][3]=c[i][0]-c[i][1];
			// printf("*c[%d]=(%d , %d , %d , %d)\n",i,c[i][0]/2,c[i][1]/2,c[i][2]/2,c[i][3]/2);
		}
		int tmpi=0;//都共线
		int p[24][4];
		for(i=1;i<n;i++){
			int tmpj=0;//共线
			for(j=0;j<4;j++)
				if(c[i][j]==c[0][j]){
					tmpj=1;
					break;
				}
			if(!tmpj){
				int ax=c[0][0],ay=c[0][1],
					bx=c[i][0],by=c[i][1];
				// printf("#%d,%d %d,%d\n",ax,ay,bx,by);
				p[0][0]=ax;
				p[0][1]=by;
				p[1][0]=ax;
				p[1][1]=bx+by-ax;
				p[2][0]=ax;
				p[2][1]=ax-bx+by;
				p[3][0]=bx;
				p[3][1]=ay;
				p[4][0]=bx+by-ay;
				p[4][1]=ay;
				p[5][0]=bx-by+ay;
				p[5][1]=ay;
				p[6][0]=bx;
				p[6][1]=ax+ay-bx;
				p[7][0]=ax+ay-by;
				p[7][1]=by;
				p[8][0]=(ax+ay+bx-by)/2;
				p[8][1]=(ax+ay-bx+by)/2;
				p[9][0]=bx;
				p[9][1]=ay-ax+bx;
				p[10][0]=ax-ay+by;
				p[10][1]=by;
				p[11][0]=(ax-ay+bx+by)/2;
				p[11][1]=(bx+by-ax+ay)/2;
				for(j=0;j<12;j++){
					p[j][2]=p[j][0]+p[j][1];
					p[j][3]=p[j][0]-p[j][1];
					// printf("*p[%d]=(%.1f , %.1f , %.1f , %.1f)\n",j,p[j][0]/2.0,p[j][1]/2.0,p[j][2]/2.0,p[j][3]/2.0);
				}
				tmpi=1;
				break;
			}
		}
		if(tmpi){
			tmpi=0;//行
			for(i=0;i<12;i++){
				int tmpj=0;//不行
				for(j=1;j<n;j++)
					if(p[i][0]!=c[j][0]&&p[i][1]!=c[j][1]&&
					p[i][2]!=c[j][2]&&p[i][3]!=c[j][3]){
						tmpj=1;
						break;
					}
				if(!tmpj){
					puts("YES");
					tmpi=1;
					break;
				}
			}
			if(!tmpi)
				puts("NO");
		}
		else
			puts("YES");
	}
	return 0;
}