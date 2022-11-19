#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int l=2,r=1,sgn=1;
		while(--n){
			l+=r;
			r=l-r;
			sgn*=-1;
		}
		printf("%d/%d\n",l*sgn,r);
	}
	return 0;
}