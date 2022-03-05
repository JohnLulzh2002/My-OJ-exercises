#include<stdio.h>
const char o[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K'};
int main(){
	int n,r,l=0;
	char ans[99];
	scanf("%d%d",&n,&r);
	printf("%d=",n);
	while(n)
		if(n%r<0){
			ans[l++]=o[n%r-r];
			n=n/r+1;
		}else{
			ans[l++]=o[n%r];
			n/=r;
		}
	while(l--)putchar(ans[l]);
	printf("(base%d)",r);
	return 0;
}