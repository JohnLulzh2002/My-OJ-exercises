#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("1");
	short a[5001]={0};
	for(short i=2;i<=m;i++)
		for(short j=i;j<=n;j+=i)a[j]=1-a[j];
	for(short i=2;i<=n;i++)
		if(a[i]==0)printf(",%d",i);
	return 0;
}