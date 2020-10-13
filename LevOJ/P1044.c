#include<stdio.h>
int main(){
	int a[11],i=0,j,s;
	for(;i<10;i++)scanf("%d",&a[i]);
	for(i=0;i<9;i++){
		for(j=i;j<10;j++)
			if(a[i]>a[j]){
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
	}
	for(i--;i+1;i--)
		if(a[i]%2)
			printf("%d ",a[i]);
	for(i++;i<10;i++)
		if(a[i]%2-1)
			printf("%d ",a[i]);
	return 0;
}
