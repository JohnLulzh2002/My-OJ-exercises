#include<stdio.h>
int main(){
	int n,m,i,j;
	const int di[]={-1,-1,-1,0,0,1,1,1},
		dj[]={-1,0,1,-1,1,-1,0,1};
	char a[101][101];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%*c");
		for(j=0;j<m;j++)
			scanf("%c",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]-'*'){
				a[i][j]='0';
				int k,ip,jp;
				for(k=0;k<9;k++)
				if((ip=i+di[k])>-1&&(jp=j+dj[k])>-1&&ip<n&&jp<m
					&&a[ip][jp]=='*')a[i][j]++;
			}
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}