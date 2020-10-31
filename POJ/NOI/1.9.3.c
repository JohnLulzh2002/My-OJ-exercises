#include<stdio.h>
int main(){
	int i=1,a,b,m=0,d;
	for(;i<8;i++){
		scanf("%d%d",&a,&b);
		if(a+b>m){
			m=a+b;
			d=i;
		}
	}
	printf("%d",d);
	return 0;
}