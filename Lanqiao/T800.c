#include<stdio.h>
int main(){
	int n,max=0,min=100,a,i;
	float avg=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>max)max=a;
		if(a<min)min=a;
		avg+=(float)a/n;
	}
	printf("%d\n%d\n%.2f",max,min,avg);
	return 0;
}