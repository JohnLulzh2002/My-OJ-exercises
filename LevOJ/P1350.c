#include<stdio.h>
int main(){
	int m,n,l,r,ans,a[102];
	while(~scanf("%d%d",&n,&m)){
		while(n--)
			a[n]=0;
		while(m--){
			scanf("%d%d",&l,&r);
			for(;l<=r;l++)
				a[l]++;
		}
		scanf("%d%d",&l,&r);
		ans=0;
		for(;l<=r;l++)
			ans+=a[l];
		printf("%d\n",ans);
	}
	return 0;
}