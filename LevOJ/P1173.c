#include<stdio.h>
#include<string.h>
char url[201][71];
int main(){
	strcpy(url[0],"http://www.acm.org/");
	int max=0,now=0;
	char op[10];
	while(scanf("%s",op),op[0]!='Q'){
		if(op[0]=='V')
			scanf("%s",url[max=++now]);
		if(op[0]=='B'){
			if(now)
				now--;
			else{
				printf("Ignored\n");
				continue;
			}
		}
		if(op[0]=='F'){
			if(now<max)
				now++;
			else{
				printf("Ignored\n");
				continue;
			}
		}
		printf("%s\n",url[now]);
	}
	return 0;
}