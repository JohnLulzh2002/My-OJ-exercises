#include<stdio.h>
int main(){
	int n,i,j,c=0,a[10001]={};
	scanf("%d",&n);
	for(i=2;i<n;i++)
		for(j=i+i;j<n;j+=i)
			a[j]++;
	for(i=3;i<n-1;i++)
		if(!(a[i]||a[i+2])){
			c++;
			printf("%d %d\n",i,i+2);
		}
	if(!c)printf("empty");
	return 0;
}