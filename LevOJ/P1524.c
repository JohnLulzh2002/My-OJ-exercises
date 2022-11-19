#include<stdio.h>
int main(){
	int i,c=0;
	for(i=100;i<=200;i++)
		if(i%3){
			c++;
			if(c==6){
				c=0;
				printf("%6d\n",i);
			}else
				printf("%6d",i);
		}
	return 0;
}