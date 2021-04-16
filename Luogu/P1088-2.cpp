#include<stdio.h>
#include<algorithm>
int main(){
	int n,m,a[10001],i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	while(m--)
		std::next_permutation(a,a+n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}