#include<stdio.h>
#include<string.h>
int main(){
	char n[40];
	int i,ans,l,wight;
	scanf("%s",n);
	do{
		ans=wight=0;
		l=strlen(n);
		for(i=0;i<l;i++){
			wight=wight*2+1;
			ans+=wight*(n[l-1-i]-'0');
		}
		printf("%d\n",ans);
		scanf("%s",n);
	}while(!(n[0]=='0'&&n[1]==0));
	return 0;
}