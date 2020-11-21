#include<stdio.h>
int main(){
	int n,a,min;
	while(~scanf("%d",&n)){
		min=2147483647;
		while(n--){
			scanf("%d",&a);
			if(a<min)min=a;
		}
		printf("%d\n",min);
	}
	return 0;
}