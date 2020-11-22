#include<stdio.h>
int main(){
	int i,t;
	char s[100001];
	while(~scanf("%s",s)){
		t=0;
		for(i=0;s[i];i++){
			t++;
			if(s[i]-'0')
				t+=t;
			t%=100000007;
		}
		printf("%d\n",t);
	}
	return 0;
}