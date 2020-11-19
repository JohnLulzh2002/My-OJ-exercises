#include<stdio.h>
int main(){
	int i,n;
	while(~scanf("%d",&n)){
		for(i=3;n;i++)
			if(!(i%3&&i%5))
				n--;
		printf("%d\n",i-1);
	}
	return 0;
}