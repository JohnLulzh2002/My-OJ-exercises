#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,max,min,ave;
		scanf("%d%d%d%d",&n,&max,&min,&ave);
		if((max>=min)&&((n-1)*min+max<=n*ave)
			&&((n-1)*max+min>=n*ave))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}