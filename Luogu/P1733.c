#include<stdio.h>
int main(){
	int l=1,r=1000000000,m,a;
	do{
		m=(l+r)/2;
		printf("%d\n",m);
		fflush(stdout);
		scanf("%d",&a);
		if(a<0)l=m+1;
		if(a>0)r=m-1;
	}while(a);
	return 0;
}