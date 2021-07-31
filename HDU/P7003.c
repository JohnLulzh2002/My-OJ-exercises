#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,j,kill[55][55],dead[55]={};
		int remain,n,now,walfi;
		scanf("%d",&n);
		remain=n-1;
		for(i=1;i<=n;i++){
			scanf("%d",&j);
			if(j)walfi=i;
		}
		for(i=1;i<=n;i++)for(j=1;j<=n;j++)
			scanf("%d",&kill[i][j]);
		dead[now=kill[walfi][1]]=1;
		while(!dead[walfi]&&remain>2){
			for(i=1;dead[kill[now][i]];i++);
			now=kill[now][i];
			dead[now]=1;
			remain--;
		}
		if(dead[walfi])printf("lieren\n");
		else	printf("langren\n");
	}
	return 0;
}