#include<stdio.h>
int main(){
	int n,i,l;
	scanf("%d",&n);
	while(n--){
		long long a;
		scanf("%lld",&a);
		int b[66]={},neg;
		if(neg=(a<0))
			a=-a;
		for(l=0;a;l++){
			b[l]=a%2;
			a/=2;
		}
		if(neg){
			for(i=0;i<l;i++)
				b[i]=1-b[i];
			b[0]++;
			for(i=0;b[i]>1;i++){
				b[i]=0;
				b[i+1]++;
			}
			if(i>=l)l++;
		}
		printf("%d",neg);
		for(;l>0;l--)
			printf("%d",b[l-1]);
		printf("\n");
	}
	return 0;
}