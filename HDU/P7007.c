#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	next:;
	while(t--){
		int i,n,a[100002];
		long long max=0,m,x=0,delta=0;
		scanf("%d%lld",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		for(i=0;i<n;i++){
			x+=a[i];
			if(x<0)x=0;
			if(x>=m){
				printf("1\n");
				goto next;
			}
		}
		if(x<=0){
			printf("-1\n");
			goto next;
		}
		delta=x;
		for(i=0;i<n;i++){
			x+=a[i];
			if(x<=0){
				printf("-1\n");
				goto next;
			}
			if(x>max)max=x;
			if(x>=m){
				printf("2\n");
				goto next;
			}
		}
		delta=x-delta;
		printf("%lld\n",(m-max-1)/delta+3);
	}
	return 0;
}