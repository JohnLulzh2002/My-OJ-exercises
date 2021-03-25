#include<stdio.h>
int main(){
	int i,j,n,a,b,k[202],step[202];
	scanf("%d%d%d",&n,&a,&b);
	for(i=1;i<=n;i++){
		scanf("%d",&k[i]);
		step[i]=-1;
	}
	step[a]=0;
	for(i=0;i<n;i++)for(j=1;j<=n;j++)
		if(step[j]>-1){
			if(j+k[j]<=n&&(step[j]<step[j+k[j]]||step[j+k[j]]<0))
				step[j+k[j]]=step[j]+1;
			if(j-k[j]>0&&(step[j]<step[j-k[j]]||step[j-k[j]]<0))
				step[j-k[j]]=step[j]+1;
		}
	printf("%d",step[b]);
	return 0;
}