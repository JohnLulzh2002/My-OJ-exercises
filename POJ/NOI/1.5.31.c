#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("1");
        short i,j,s;
	for(i=2;i<=n;i++){
		s=1;
		for(j=2;j<=m;j++)if(i%j==0)s=1-s;
		if(s==1)printf(",%d",i);
	}
	return 0;
}
