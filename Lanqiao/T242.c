#include<stdio.h>
int main(){
	char s[5];
	scanf("%s",s);
	int i=3,n=0,t=1;
	while(i--){
		if(s[i]>='A')n+=(s[i]-'A'+10)*t;
		else	n+=(s[i]-'0')*t;
		t*=16;
	}
	if(s[2]=='0'){
		s[2]=0;
		if(s[1]=='0')
			s[1]=0;
	}
	printf("%s %d ",s,n);
	int o[10];
	i=0;
	while(n){
		o[i++]=n%8;
		n/=8;
	}
	if(!i)printf("0");
	while(i--)printf("%d",o[i]);
	return 0;
}