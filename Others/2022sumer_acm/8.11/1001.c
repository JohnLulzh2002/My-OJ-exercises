#include<stdio.h>
char s[100005];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		int i,o=0,e=0;
		for(i=0;s[i];i++){
			if(i%2){
				if(s[i]=='0')
					o++;
			}else{
				if(s[i]=='0')
					e++;
			}
		}
		for(i=0;s[i];i++){
			if(i%2){
				if(o-- >0)
					putchar('0');
				else
					putchar('1');
			}else{
				if(e-- >0)
					putchar('0');
				else
					putchar('1');
			}
		}
		putchar('\n');
	}
	return 0;
}