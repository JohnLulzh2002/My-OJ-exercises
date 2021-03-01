#include<stdio.h>
int main(){
	int a,b,ans[2000],rest[2000],i=0,j,k;
	scanf("%d,%d",&a,&b);
	printf("%d",a/b);
	rest[0]=a%=b;
	while(1){
		a*=10;
		ans[i]=a/b;
		rest[++i]=a%=b;
		if(!a){
			while(i&&!ans[i-1])i--;
			if(i){
				printf(".");
				for(j=0;j<i;j++)printf("%d",ans[j]);
			}
			return 0;
		}
		for(j=0;j<i;j++)if(rest[j]==a){
			printf(".");
			for(k=0;k<j;k++)printf("%d",ans[k]);
			printf("[");
			for(;j<i;j++)printf("%d",ans[j]);
			printf("]");
			return 0;
		}
	}
}