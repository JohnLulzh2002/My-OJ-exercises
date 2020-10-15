#include<stdio.h>
int main(){
	int n,i,a;
	char s[102];
	while(scanf("%s",&s)==1){
		a=i=0;
		while(s[i+1]&&s[i]){
			if(s[i+2]=='a'){
				a*=2;
				i+=3;
			}
			else{
				a*=2;
				a++;
				i+=2;
			}
		}
		for(i=0;s[i];i++)s[i]=0;
		printf("%d\n",a);
	}
	return 0;
}
