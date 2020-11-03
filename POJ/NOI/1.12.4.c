#include<stdio.h>
int a[101][101],b[100][100],m,n,r,s;
int abs(int n){return n>0?n:-n;}
int f(int x,int y){
	int i=0,j,sum=0;
	for(;i<r;i++)for(j=0;j<s;j++)
		sum+=abs(a[x+i][y+j]-b[i][j]);
	return sum;
}
int main(){
	int i=0,j,min=99999999,t,x,y;
	scanf("%d%d",&m,&n);
	for(;i<m;i++)for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	scanf("%d%d",&r,&s);
	for(i=0;i<r;i++)for(j=0;j<s;j++)
		scanf("%d",&b[i][j]);
	
	for(i=0;i<=m-r;i++)for(j=0;j<=n-s;j++){
		t=f(i,j);
		if(t<min){
			x=i;y=j;
			min=t;
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<s;j++)
			printf("%d ",a[x+i][y+j]);
		printf("\n");
	}
	return 0;
}