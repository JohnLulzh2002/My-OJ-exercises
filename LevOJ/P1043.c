#include<stdio.h>
int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)==3){
		if(a<b){a^=b;b^=a;a^=b;}
		if(a<c){a^=c;c^=a;a^=c;}//max:a
		if(a*a==b*b+c*c&&a<b+c)printf("Yes\n");
		else printf("N0\n");
	}
	return 0;
}
