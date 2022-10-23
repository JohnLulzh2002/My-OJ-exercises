#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if((a-1)^(b-1)^(c-1))
			printf("Win\n");
		else
			printf("Lose\n");
	}
	return 0;
}