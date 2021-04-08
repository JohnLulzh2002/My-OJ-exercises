#include<stdio.h>
int a[2000002];
int main(){
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	while(m--){
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}