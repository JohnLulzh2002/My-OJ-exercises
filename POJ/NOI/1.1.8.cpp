#include<cstdio>
using namespace std;
int main(){
	char c;
	c=getchar();
	for(short i=1;i<=3;i++){
		for(short j=1;j<=3-i;j++)	putchar(' ');
		for(short j=1;j<=2*i-1;j++)	putchar(c);
		putchar('\n');
	}
	return 0;
}
