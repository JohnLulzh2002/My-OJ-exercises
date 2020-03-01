#include <stdio.h>
int main(){
	int m, n,x;
	scanf("%d%d%d",&m,&n,&x);
	while(x>=0){
		x-=m/n;
		if(m%n!=0)x--;
		if(x<0)break;
		n+=m/n;
	}
	printf("%d",n);
	return 0;
}