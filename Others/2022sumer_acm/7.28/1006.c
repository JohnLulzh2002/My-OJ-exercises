#include<stdio.h>
int a[100005];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		double s=0;
		for(i=0;i<n;i++)
			s+=a[i];
		if(s<100)
			printf("%.3lf ",s);
		else if(s<225)
			printf("%.3lf ",100+(s-100)*0.8);
		else
			printf("%.3lf ",200+(s-225)*0.5);
		s=0;
		for(i=0;i<n;i++)
			if(s<100)
				s+=a[i];
			else if(s<200)
				s+=a[i]*0.8;
			else
				s+=a[i]*0.5;
		printf("%.3lf\n",s);
	}
	return 0;
}