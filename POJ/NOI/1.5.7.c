#include<stdio.h>
int main(){
	int n,a,b,c,A=0,B=0,C=0;
	for(scanf("%d",&n);n>0;n--){
		scanf("%d%d%d",&a,&b,&c);
		A+=a;B+=b;C+=c;
	}
	printf("%d %d %d %d",A,B,C,A+B+C);
	return 0;
}
