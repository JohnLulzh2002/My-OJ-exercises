#include<string.h>
#include<stdio.h>
int main(){
	int n=0,i=0,j,k;
	char s[101][51],t[51];
	while(scanf("%s",s[n])==1)
		n++;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(strcmp(s[i],s[j])>0){
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
	printf("%s",s[0]);
	for(i=1;i<n;i++){
		if(strcmp(s[i],s[i-1])==0){
			for(k=i;k+1<n;k++)
				strcpy(s[k],s[k+1]);
			n--;
			i--;
		}
	}
	for(i=1;i<n;i++)
		printf("\n%s",s[i]);
	return 0;
}