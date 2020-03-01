#include <stdio.h>
int main(){
	int a,b,t;
	char c,e;
	scanf("%d%d %c%d",&a,&b,&c,&t);
	e=' ';
	if(t)e=c;
	for(int i=a,j;i>0;i--){
		if(i==a||i==1)
			for(j=b;j>0;j--)printf("%c",c);
		else
			for(j=b;j>0;j--)
				if(j==b||j==1)
					printf("%c",c);
				else printf("%c",e);
		printf("\n");
	}
	return 0;
}