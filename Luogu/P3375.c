#include<stdio.h>
#include<string.h>
char s[1000001],p[10001];
int next[10001];
int main(){
	scanf("%s%s",s,p);
	int ls=strlen(s),
	lp=strlen(p);

	next[0]=-1;
	int i=1,j=0;
	while(i<lp){
		if(p[i]==p[j])
			next[i++]=j++;
		else if(j==0)
			next[i++]=-1;
		else
			j=next[j-1]+1;
	}

	i=j=0;
	while(i<ls){
		if(j==-1||s[i]==p[j]){
			i++;j++;
			if(j==lp){
				printf("%d\n",i-lp+1);
				j=next[j-1]+1;
			}
		}
		else if(j==0)
			i++;
		else
			j=next[j-1]+1;
	}
	for(i=0;i<lp;i++)
		printf("%d ",next[i]+1);
	return 0;
}