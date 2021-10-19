#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,i;
		scanf("%d%d",&n,&m);
		char no[100001]={};
		while(m--){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			no[b]=1;
		}
		for(m=1;no[m];m++);
		for(i=1;i<=n;i++){
			if(i==m)continue;
			printf("%d %d\n",i,m);
		}
	}
	return 0;
}