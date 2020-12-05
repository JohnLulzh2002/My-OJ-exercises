#include<stdio.h>
char n[200];
int remain;
void del(int l){
	int i=l-1;
	for(;i+1;i--)
		if((n[i]-'0')<(n[l]-'0')){
			n[i]='x';
			remain--;
			if(!remain)return;
		}
}
int main(){
	int i,k;
	while(~scanf("%s%d",n,&k)){
		remain=k;
		for(i=1;remain;i++)
			del(i);
		for(i=0;n[i];i++)
			if(n[i]-'x')
				printf("%c",n[i]);
		printf("\n");
	}
	return 0;
}