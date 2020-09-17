#include<stdio.h>
int main(){
	int n,i,j,s[1001]={};
	short a[1001]={};
	for(i=2;i<498;i++)
		for(j=2*i;j<1001;j+=i)
			a[j]=1;
	for(i=2;i<1000;i++){
		s[i+1]=s[i];
		if(a[i]==0)s[i+1]+=i;
	}
	while(scanf("%d",&n)==1)
		printf("%d\n",s[n]);
	return 0;
}
