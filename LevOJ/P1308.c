#include<stdio.h>
int main(){
	int i,n,count,fac;
	while(~scanf("%d",&n)){
		count=0;
		for(i=fac=1;i<=n;i++){
			fac*=i;
			while(fac%10==0){
				fac/=10;
				count++;
			}
			fac%=10000;
		}
		printf("%d\n",count);
	}
	return 0;
}