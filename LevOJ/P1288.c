#include<stdio.h>
int isgcd(int a,int b){
	if(b>a){
		a+=b;
		b=a-b;
		a-=b;
	}
	int c;
	while(b!=1){
		c=a%b;
		if(!c)return 0;
		a=b;
		b=c;
	}
	return 1;
}
int main(){
	int n,i,a,c;
	while(~scanf("%d",&n)){
		c=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(isgcd(n,a))c++;
		}
		printf("%d\n",c);
	}
	return 0;
}