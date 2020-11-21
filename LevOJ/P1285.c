#include<stdio.h>
int main(){
	int n,a[100000][2]={
	{0,1},{1,0}},i=2;
	//0×ó1ÓÒ
	for(;i<1e5;i++){
		a[i][0]=a[i-1][1]+a[i-2][1];
		a[i][1]=a[i-1][0]+a[i-2][0];
	}
	while(~scanf("%d",&n))
		printf("%d\n",a[n][1]);
	return 0;
}