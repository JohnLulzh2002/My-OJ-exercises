#include<stdio.h>
char a[1010][1010],w[1010][1010];
const char s[6][7]={
	"######",
	"##..##",
	"#....#",
	"#....#",
	"##..##",
	"######",
};
const int dx[]={0,7,0,-7},dy[]={7,0,-7,0};
int main(){
	int n,m,i,j,k,x,y,can;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	if(m<10||n<10){
		printf("0 0\n");
		return 0;
	}
	for(i=0;i<n-6;i++)for(j=0;j<m-6;j++){
		can=1;
		for(x=0;can&&x<6;x++)
			for(y=0;can&&y<6;y++)
				if(a[i+x][j+y]!=s[x][y])
					can=0;
		w[i][j]=can;
	}
	int as=0,ac=0;
	for(i=0;i<n-4;i++)for(j=0;j<m-4;j++){
		if(!w[i][j]) continue;
		can=0;
		for(k=0;k<4;k++){
			x=i+dx[k];
			y=j+dy[k];
			if(x>0&&x<n&&y>0&&y<m && w[x][y]){
				can=1;
				w[x][y]=w[i][j]=0;
				break;
			}
		}
		ac+=can;
		as+=1-can;
	}
	printf("%d %d",ac,as);
	return 0;
}