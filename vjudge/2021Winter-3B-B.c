#include<stdio.h>
char a[501][501];
int main(){
	int h,w;
	scanf("%d%d",&h,&w);
	if(h<3||w<3){
		printf("NO");
		return 0;
	}
	int i,j;
	for(i=0;i<h;i++){
		scanf("%*c");
		for(j=0;j<w;j++)
			scanf("%c",&a[i][j]);
	}
	int t=1,ci,cj;
	for(i=1;i<h-1;i++)
		for(j=1;j<w-1;j++)
			if(a[i][j]=='*'&&
				a[i-1][j]=='*'&&
				a[i+1][j]=='*'&&
				a[i][j-1]=='*'&&
				a[i][j+1]=='*'){
				ci=i;cj=j;
				a[i][j]=a[i-1][j]=a[i+1][j]
					=a[i][j-1]=a[i][j+1]='1';
				t=0;
				goto detected;
			}
	detected:
	if(t){
		printf("NO");
		return 0;
	}
	for(i=ci-2,j=cj;i>=0;i--)
		if(a[i][j]=='*')
			a[i][j]='1';
		else
			break;
	for(i=ci+2,j=cj;i<h;i++)
		if(a[i][j]=='*')
			a[i][j]='1';
		else
			break;
	for(i=ci,j=cj-2;j>=0;j--)
		if(a[i][j]=='*')
			a[i][j]='1';
		else
			break;
	for(i=ci,j=cj+2;j<w;j++)
		if(a[i][j]=='*')
			a[i][j]='1';
		else
			break;
	for(i=0;i<h;i++)
		for(j=0;j<w;j++){
			if(a[i][j]=='*'){
				printf("NO");
				return 0;
			}
		}
	printf("YES");
	return 0;
}