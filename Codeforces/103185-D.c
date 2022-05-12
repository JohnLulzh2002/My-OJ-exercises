#include<stdio.h>
int s[100020];
int main(){
	int n,a;
	scanf("%d",&n);
	if(n==1){
		putchar('N');
		return 0;
	}
	while(n--){
		scanf("%d",&a);
		s[a]++;
	}
	n=0;
	for(a=0;a<100018;a++){
		s[a+1]+=s[a]/2;
		if(s[a]%2)
			n++;
	}
	if(n<3)
		putchar('Y');
	else
		putchar('N');
	return 0;
}