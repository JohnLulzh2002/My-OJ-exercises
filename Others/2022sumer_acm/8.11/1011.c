#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int ans=0,n,m,k,i,j;
		scanf("%d%d%d",&n,&m,&k);
		for(i=1;i<=n;i++){
			j=k/i;
			if(k%i)j++;
			if(j>m)continue;
			j=n/i-1+m/j-1;
			if(j>ans)	ans=j;
		}
		printf("%d\n",ans);
	}
	return 0;
}