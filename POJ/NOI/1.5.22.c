#include <stdio.h>
int main(){
	int s=0,m=0,o;
	short i=1;
	for(scanf("%d",&o);i<13;i++){
		m+=300-o;
		if(m<0){
			printf("-%d",i);
			return 0;
		}
		s+=m/100;
		m%=100;
	}
	printf("%d",s*120+m);
	return 0;
}
