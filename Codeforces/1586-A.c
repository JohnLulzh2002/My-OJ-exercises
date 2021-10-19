#include<stdio.h>
#define MAX 20002
char notPrimer[MAX];
int primers[MAX/6];
int main(){
	int t,pc=0;
	for(t=2;t<MAX;t++){
		if(!notPrimer[t])
			primers[pc++]=t;
		int i=0,b;
		for(;i<pc&&(b=t*primers[i])<MAX;i++)
			notPrimer[b]=1;
	}
	scanf("%d",&t);
	while(t--){
		int i,n,a[101],s=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",a+i);
			s+=a[i];
		}
		if(notPrimer[s]){
			printf("%d\n",n);
			for(i=0;i<n;i++)
				printf("%d ",i+1);
		}else{
			printf("%d\n",n-1);
			int t=1;
			for(i=0;i<n;i++){
				if(t&&a[i]%2){
					t=0;
					continue;
				}
				printf("%d ",i+1);
			}
		}
		printf("\n");
	}
	return 0;
}