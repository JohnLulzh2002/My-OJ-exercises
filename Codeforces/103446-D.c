#include<stdio.h>
int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int p,q,a,b;
		scanf("%d%d",&p,&q);
		a=gcd(p,q);
		p/=a;q/=a;
		for(a=1;a*a<p;a++)
			if(q%a==0){
				b=q/a;
				if(a*a+b*b==p){
					printf("%d %d\n",a,b);
					goto ok;
				}
			}
		printf("0 0\n");
		ok:;
	}
	return 0;
}