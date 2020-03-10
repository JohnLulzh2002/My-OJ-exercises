#include<stdio.h>
int main(){
	char a;
	int i,j;
	scanf("%c",&a);
	for(i=1;i<4;i++){
		for(j=1;j<3+i;j++){
			if(j<4-i)printf(" ");
			else printf("%c",a);
		}
		printf("\n");
	}
	for(i=1;i<3;i++){
		for(j=1;j<6-i;j++){
			if(j<1+i)printf(" ");
			else printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}