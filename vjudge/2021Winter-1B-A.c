#include<stdio.h>
int main(){
	int t,n,a,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("9");
		a=8;
		for(i=1;i<n;i++){
			printf("%d",a);
			a++;
			if(a>9)a=0;
		}
		printf("\n");
	}
	return 0;
}