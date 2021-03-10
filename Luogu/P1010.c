// 2^14=16384 < 2*10^4 < 32768=2^15
// 1   2(0)
// 2   2
// 3   2+2(0)
// 4   2(2)
#include<stdio.h>
const char*t[5]={"0","2(0)","2","2+2(0)","2(2)"};
const int e[]={1,2,4};
void calc(int n){
	if(n<5){
		printf(t[n]);
		return;
	}
	int i=0,a[16]={};
	while(n){
		a[i++]=n%2;
		n/=2;
	}
	i--;
	if(i<3)calc(e[i]);
	else{
		printf("2(");
		calc(i);
		printf(")");
	}
	while(i--)if(a[i]){
		printf("+");
		if(i<3)calc(e[i]);
		else{
			printf("2(");
			calc(i);
			printf(")");
		}
	}
	return;
}
int main(){
	int n;
	scanf("%d",&n);
	calc(n);
	// for(n=1;n<18;n++){
	// 	printf("%d	",n);
	// 	calc(n);
	// 	printf("\n");
	// }
	return 0;
}