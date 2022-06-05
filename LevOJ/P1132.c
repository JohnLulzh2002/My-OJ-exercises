#include<stdio.h>
char a[1007][1100]={};
int main(){
	int i,j,n;
	a[1][0]=1;
	for(i=1;i<1003;i++){
		a[i+1][i]=1;
		for(j=0;j<1000;j++){
			a[i+1][j]+=a[i][j]*9;
			a[i+1][j+1]+=a[i+1][j]/10;
			a[i+1][j]%=10;
		}
	}
	while(~scanf("%d",&n)){
		for(i=1005;a[n][i]==0;i--);
		for(;i+1;i--)
			printf("%d",a[n][i]);
		putchar('\n');
	}
	return 0;
}