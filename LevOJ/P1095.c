#include<stdio.h>
int main(){
	int t,a,n,max,min;
	double s;
	for(scanf("%d",&t);t;t--){
		n=s=max=0;
		min=1000;
		scanf("%d",&a);
		while(a+1){
			if(a>max)max=a;
			if(a<min)min=a;
			s+=a;
			n++;
			scanf("%d",&a);
		}
		printf("%d\n%d\n%d\n%.1f\n",n,max,min,s/n);
	}
	return 0;
}