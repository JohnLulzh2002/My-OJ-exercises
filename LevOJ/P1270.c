#include<stdio.h>
int main(){
	int n,a,b,s;
	while(~scanf("%d",&n)){
		s=1;
		scanf("%d",&a);
		n--;
		while(n--){
			scanf("%d",&b);
			if(b>a){
				s++;
				a=b;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}