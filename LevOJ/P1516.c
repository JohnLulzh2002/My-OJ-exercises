#include<stdio.h>
int main(){
	int n,a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		if(a>b){
			a+=b;
			b=a-b;
			a-=b;
		}
		if(a>c){
			a+=c;
			c=a-c;
			a-=c;
		}
		if(b>c){
			b+=c;
			c=b-c;
			b-=c;
		}
		if(a+b<=c){
			printf("Not Triangle\n");
			continue;
		}
		if(a==b&&b==c){
			printf("Regular Triangle\n");
			continue;
		}
		if(a==b||b==c){
			printf("Isosceles Triangle\n");
			continue;
		}
		printf("Triangle\n");
	}
	return 0;
}