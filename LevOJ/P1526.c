#include<stdio.h>
int main(){
	int n,c=0,a=1,b=0;
	scanf("%d",&n);
	while(n--){
		c++;
		if(c==4){
			c=0;
			printf("%12d\n",a);
		}
		else
			printf("%12d",a);
		a+=b;
		b=a-b;
	}
	return 0;
}