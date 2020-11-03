#include<stdio.h>
int main(){
	int a[16],n=0,i=0,j,c=0;
	for(;scanf("%d",&a[n])==1;n++);
	n--;
	for(;i<n;i++)for(j=i+1;j<n;j++)
		if(a[i]==2*a[j]||a[j]==2*a[i])
			c++;
	printf("%d",c);
	return 0;
}