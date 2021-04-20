#include<stdio.h>
int main(){
	int n,m,a[1000]={},b;
	scanf("%d%d",&n,&m);
	while(m--){
		scanf("%d",&b);
		a[b]++;
	}
	for(m=1;m<=n;m++)
		for(b=0;b<a[m];b++)
			printf("%d ",m);
	return 0;
}