#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[111];
		int i,flag=1;
		scanf("%s",s);
		for(i=0;s[i];i++)
			if(s[i]>'0'&&s[i]<='9'){
				flag=0;
				break;
			}
		if(flag)printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}