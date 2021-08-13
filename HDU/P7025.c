#include<stdio.h>
#define MAX 21000000
int primers[MAX/6];
char notPrimer[MAX];
int main(){
	int t,pc=0;
	for(t=2;t<MAX;t++){
		if(!notPrimer[t])
			primers[pc++]=t;
		int i,b;
		for(i=0;i<pc&&(b=t*primers[i])<MAX;i++)
			notPrimer[b]=1;
	}
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n==0)	printf("3\n");
		else if(n==1)printf("2\n");
		else if(n>0){
			if(!notPrimer[n])
				printf("1\n");
			else if(!notPrimer[n+n-1]||!notPrimer[n+n+1])
				printf("2\n");
			else goto hahaha;
		}else{
			n=-n;
			hahaha:
			while(notPrimer[++n]&&notPrimer[n+n+1]);
			if(!notPrimer[n])
				printf("%d\n",n*2);
			else printf("%d\n",n*2+1);
		}
	}
	return 0;
}