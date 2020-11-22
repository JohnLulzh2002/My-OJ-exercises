#include<stdio.h>
int main(){
	int n,m,x,y;
	long long a[25][25]={};
	scanf("%d%d%d%d",&m,&n,&x,&y);
	m+=2;n+=2;x+=2;y+=2;	//start:(2,2)
	a[x][y]=a[x+2][y+1]=a[x+2][y-1]=a[x+1][y+2]=a[x+1][y-2]=-1;
	a[x-1][y+2]=a[x-1][y-2]=a[x-2][y+1]=a[x-2][y-1]=-1;
	a[m][n]=1;
	for(x=m;x>1;x--){
		for(y=n;y>1;y--){
			if(a[x][y]==-1)continue;
			if(a[x-1][y]+1)a[x-1][y]+=a[x][y];
			if(a[x][y-1]+1)a[x][y-1]+=a[x][y];
		}
	}
	printf("%lld",a[2][2]);
	return 0;
}