#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n<=3)
			printf("Winner!\n");
		else if(n<386*0.05)
			printf("Au!\n");
		else if(n<386*0.15)
			printf("Ag!\n");
		else if(n<386*0.3)
			printf("Cu!\n");
		else
			printf("Fe...\n");
	}
	return 0;
}