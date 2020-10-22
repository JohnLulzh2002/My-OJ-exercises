#include<stdio.h>
int main(){
	int a[501],l=0,i=0,j;
	scanf("%*d");
	while(scanf("%d",&a[l])==1)
		if(a[l]%2)
			l++;
	for(;i<l-1;i++)
		for(j=i+1;j<l;j++)
			if(a[i]>a[j]){
				a[i]+=a[j];
				a[j]=a[i]-a[j];
				a[i]-=a[j];
			}
	printf("%d",a[0]);
	for(i=1;i<l;i++)
		printf(",%d",a[i]);
	return 0;
}