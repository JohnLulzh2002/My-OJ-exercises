#include<stdio.h>
int gcd(int a,int b){
	if(a%b)	return gcd(b,a%b);
	return b;
}
int main(){
	int t;
	scanf("%d",&t);
	gogogo:
	while(t--){
		int a,b,c;
		scanf("%d%d",&a,&b);
		c=(a+b)/gcd(a,b);
		while(c>1){
			if(c%2){
				printf("No\n");
				goto gogogo;
			}
			c/=2;
		}
		printf("Yes\n");
	}
	return 0;
}