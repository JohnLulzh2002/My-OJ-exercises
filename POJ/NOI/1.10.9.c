#include<stdio.h>
int main(){
	int n,a[1001]={},i;
	for(scanf("%d",&n);n;n--){
		scanf("%d",&i);
		a[i]++;
	}
	n=0;
	for(i=1;i<1001;i++)
		if(a[i])n++;
	printf("%d\n",n);
	for(i=1;i<1001;i++)
		if(a[i])printf("%d ",i);
	return 0;
}