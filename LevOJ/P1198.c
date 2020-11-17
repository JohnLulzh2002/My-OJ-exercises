#include<stdio.h>
int main(){
	int n,i,a,b[30];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		for(i=0;a;i++){
			b[i]=a%6;
			a/=6;
		}
		for(i--;i+1;i--)
			printf("%d",b[i]);
		printf("\n");
	}
	return 0;
}