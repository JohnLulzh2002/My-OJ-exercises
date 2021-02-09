#include<stdio.h>
#include<string.h>
int main(){
	int n;
	while(~scanf("%d",&n))while(n--){
		char s[10001],c=0;
		scanf("%s",s);
		int num=0,i=0;
		for(;s[i];i++){
			if(s[i]!=c){
				if(num>1)printf("%d",num);
				if(num)printf("%c",c);
				c=s[i];
				num=1;
			}else
				num++;
		}
		if(num>1)printf("%d",num);
		printf("%c",c);
		c=s[i];
		num=1;
		printf("\n");
	}
	return 0;
}