#include<stdio.h>
int main(){
	float a,max,min;
	int m,n,i;
	double s;
	long long ans;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		s=max=0;
		min=3e9;
		for(i=n;i;i--){
			scanf("%f",&a);
			s+=a;
			if(a>max)max=a;
			if(a<min)min=a;
		}
		s-=max+min;
		s=s/(n-2);
		ans=s*1000;
		if(ans%10>4)s+=0.005;
		printf("%.2f\n",s);
	}
	return 0;
}