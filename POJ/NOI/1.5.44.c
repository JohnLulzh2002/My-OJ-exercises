#include<stdio.h>
#include<math.h>
int main(){
	int n,i=2,j,t,c=0;
	for(scanf("%d",&n);;i++){
		t=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				t=1;
				break;
		}	}
		if(t==0){
			c++;
			printf("%d	%d\n",c,i);
			if(c==n){
				printf("%d",i);
				return 0;
		}	}
	}
}
