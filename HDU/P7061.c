#include<stdio.h>
#define MAX 10000010
int primers[MAX/6];
char notPrimer[MAX];
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
		int n,a,ans=0;
		scanf("%d",&n);
		while(n--){
			scanf("%d",&a);
			if(a==1)continue;
			int i=0,j=1;
			while(notPrimer[a])
				if(a%primers[i])
					i++;
				else{
					a/=primers[i];
					j++;
				}
			ans^=j;
		}
		if(ans)	printf("Alice\n");
		else	printf("Bob\n");
	}
	return 0;
}