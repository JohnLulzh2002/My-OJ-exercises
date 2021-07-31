#include<stdio.h>
#define Min(a,b) (((a)<(b))?(a):(b))
#define Max(a,b) (((a)>(b))?(a):(b))
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b){a+=b;b=a-b;a-=b;}
		int d=b-a;
		if((a==b&&a==1)||d==1){
			printf("-1 -1\n");
			continue;
		}
		if(a==b){
			printf("2 %d\n",a);
			continue;
		}
		int i,min=d,max=d;
		for(i=2;i*i<=d;i++)
			if(d%i==0){
				min=Min(min,i);
				max=Max(max,d/i);
				break;
			}
		printf("%d %d\n",min,max);
	}
	return 0;
}