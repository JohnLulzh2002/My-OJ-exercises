#include<stdio.h>
int main(){
	int n,s[10000],next[10001],l=1;
	scanf("%d",&n);
	if(!n){printf("0");return 0;}
	if(n==1){printf("1");return 0;}
	while(n--){
		int i,j=0;
		for(i=0;i<l;i++){
			if(s[i]){next[j++]=1;next[j++]=0;}
			else	next[j++]=1;
		}
		for(l=0;l<j;l++)
			s[l]=next[l];
	}
	while(l--)printf("%d",s[l]);
	return 0;
}