#include<stdio.h>
#define Min(a,b) a>b?b:a
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,j;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
				printf("%d ",Min(i,j));
			putchar('\n');
		}
	}
	return 0;
}