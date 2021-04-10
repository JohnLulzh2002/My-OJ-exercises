#include<stdio.h>
int s[100002];
int main(){
	int n,m,i,num[2]={};
	char c;
	scanf("%d%d%*c",&n,&m);
	for(i=0;i<n;i++)
		while(scanf("%c",&c),c!='\n')
			if(c=='1')	s[i]++;
	for(i=0;i<n;i++)
		num[s[i]%2]++;
	printf("%lld",(long long)num[0]*num[1]);
	return 0;
}