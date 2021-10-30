#include<stdio.h>
int main(){
	int t,p,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		if(x==1)
			printf("1\n");
		else
			printf("%d\n",x-1);
	}
	return 0;
}