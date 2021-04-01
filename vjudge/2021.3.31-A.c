#include<stdio.h>
int main(){
	char a;
	int b=0;
	while(~scanf("%c",&a)){
		switch(a){
			case 'Q':b+=9;break;
			case 'q':b-=9;break;
			case 'R':b+=5;break;
			case 'r':b-=5;break;
			case 'B':b+=3;break;
			case 'b':b-=3;break;
			case 'N':b+=3;break;
			case 'n':b-=3;break;
			case 'P':b+=1;break;
			case 'p':b-=1;break;
		}
	}
	if(b>0)	printf("White");
	else if(b)printf("Black");
	else	printf("Draw");
	return 0;
}