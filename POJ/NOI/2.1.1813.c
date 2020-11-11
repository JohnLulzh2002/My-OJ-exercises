#include<stdio.h>
short a[6][7];
int p[7]={};
void press(int x,int y){
	a[x][y]=1-a[x][y];
	if(x)a[x-1][y]=1-a[x-1][y];
	if(x-4)a[x+1][y]=1-a[x+1][y];
	if(y)a[x][y-1]=1-a[x][y-1];
	if(y-5)a[x][y+1]=1-a[x][y+1];
}
void next(){
	int i=0;
	for(p[0]++;p[i]>1;i++){
		p[i]=0;
		p[i+1]++;
	}
}
int main(){
	int i=0,j,n,o[6][7];
	for(i=0;i<5;i++)for(j=0;j<6;j++)
		scanf("%d",&o[i][j]);
	while(1){
		for(i=0;i<5;i++)for(j=0;j<6;j++)
			a[i][j]=o[i][j];
		for(i=0;i<6;i++)
			if(p[i])
				press(0,i);
		for(i=1;i<5;i++)for(j=0;j<6;j++)
			if(a[i-1][j])
				press(i,j);
		
		int t=1;
		for(i=0;i<6;i++)
			if(a[4][i])t=0;
		
		if(t){
			for(i=0;i<5;i++)for(j=0;j<6;j++)
				a[i][j]=o[i][j];
			for(i=0;i<6;i++){
				if(p[i]){
					press(0,i);
					printf("1 ");
				}else
					printf("0 ");
			}
			printf("\n");
			for(i=1;i<5;i++){
				for(j=0;j<6;j++)
					if(a[i-1][j]){
						press(i,j);
						printf("1 ");
					}else
						printf("0 ");
				printf("\n");
			}
			break;
		}
		next();
	}
	return 0;
}