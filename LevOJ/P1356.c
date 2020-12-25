#include<stdio.h>
int main(){
	int n,i,j;
	while(~scanf("%d",&n)){
		printf("%d:\n",n);
		for(i=1;i<=n;i++){
			for(j=0;j<i;j++){
				if(j%2)
					printf("-");
				else
					printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}