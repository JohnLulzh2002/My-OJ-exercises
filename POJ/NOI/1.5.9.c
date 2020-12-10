#include<stdio.h>
int main(){
	int m,n,s=0;
	for(scanf("%d%d",&m,&n);m<=n;m++)
		if(m%2==1)s+=m;
	printf("%d",s);
	return 0;
}
