#include<stdio.h>
#include<string.h>
#define MOD 20220911
long long stack[100000]={};
int main(){
	int top=0;
	char r[20]="repeat";
	char f[20]="for";
	char t[20]="times";
	long long a=0;
	char s[20];
	while(1){
		scanf("%s",s);
		if(strcmp(s,"arithmetic")==0)
			;
		else if(strcmp(s,"library")==0)
			a++;
		else if(strcmp(s,"repeat")==0){
			stack[top++]=a;
			a=0;
		}else if(strcmp(s,"for")==0){
			int n;
			scanf("%d",&n);
			scanf("%*s");
			a*=n;
			a%=MOD;
			a+=stack[--top];
			a%=MOD;
		}else if(strcmp(s,"fin")==0)
			break;
	}
	printf("%lld\n",a);
	return 0;
}