#include<stdio.h>
int main(){
	int i,a,b; 
	while(scanf("%d%d",&a,&b)==2){
		for(i=2;i<=a;i++){
			while(!(a%i||b%i)){
				a/=i;b/=i;
			}
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}
