#include<stdio.h>
#include<string.h>
char s[100001];
int main(){
	int i,l,last[27]={};
	long long ans=0;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++){
		ans+=(long long)(i-last[s[i]-'a']+1)*(l-i);
		last[s[i]-'a']=i+1;
	}
	printf("%lld",ans);
	return 0;
}