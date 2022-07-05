#include<stdio.h>
char ans[1030][1030];
void f(int x,int y,int l){
	if(l<1)return;
	int i,j;
	for(i=0;i<l;i++)for(j=0;j<l;j++)
		ans[x+i][y+j]=1;
	f(x+l,y,l/2);
	f(x,y+l,l/2);
	f(x+l,y+l,l/2);
}
int main(){
	int n,p[]={0,1,2,4,8,16,32,64,128,256,512,1024},i,j;
	scanf("%d",&n);
	f(0,0,p[n]);
	for(i=0;i<p[n+1];i++){
		for(j=0;j<p[n+1];j++)
			printf("%d ",1-ans[i][j]);
		putchar('\n');
	}
	return 0;
}