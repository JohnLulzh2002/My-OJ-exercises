#include<stdio.h>
int tri(int a){return a*a*a;}
int main(){
	int n,a,b,c,d;
	scanf("%d",&n);
	for(a=3;a<=n;a++)
	for(b=2;b<a;b++)
	for(c=b;c<a;c++)
	for(d=c;d<a;d++)
	if(tri(a)==tri(b)+tri(c)+tri(d))
		printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
	return 0;
}