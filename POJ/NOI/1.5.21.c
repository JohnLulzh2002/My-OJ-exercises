#include <stdio.h>
int main(){
	unsigned int n;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			printf("%d/2=",n);
			n/=2;
			printf("%d\n",n);
		}
		else{
			printf("%d*3+1=",n);
			n=n*3+1;
			printf("%d\n",n);
		}
	}
	printf("End");
	return 0;
}