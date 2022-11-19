#include<stdio.h>
int main(){
	int a,n=0,max=0,min=100;
	float sum=0;
	while(scanf("%d",&a),a+1){
		n++;
		sum+=a;
		if(max<a)max=a;
		if(min>a)min=a;
	}
	printf("%d,%.2f,%d,%d",n,sum/n,max,min);
	return 0;
}