#include<stdio.h>
int main(){
	int max,a,n;
	while(~scanf("%d",&n)){
		max=0;
		while(n--){
			scanf("%d",&a);
			if(a>max)max=a;
		}
		printf("%d\n",max);
	}
	return 0;
}