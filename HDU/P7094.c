#include<stdio.h>
int main(){
	int n,k,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		if(k==2||n==1)
			printf("No!\n");
		else if(n==k||k%2)
			printf("Yes!\n");
		else
			printf("No!\n");
	}
	return 0;
}