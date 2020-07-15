#include <stdio.h>
int main(){
	int n,m,a[101],i=0,s=0;
	for(scanf("%d",&n);i<n;i++)scanf("%d",&a[i]);
	for(scanf("%d",&m);i>-1;i--)
		if(a[i]==m)s++;
	printf("%d",s);
	return 0;
}