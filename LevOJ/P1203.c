#include<stdio.h>
int main(){
	int n,a,b;
	while(~scanf("%d",&n)){
		if(n%5==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}