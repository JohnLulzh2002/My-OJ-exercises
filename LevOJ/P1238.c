#include<stdio.h>
int main(){
	int n,ans,k,m,a;
	while(~scanf("%d",&n)){
		ans=0;
		while(n--){
			scanf("%d",&k);
			m=-2e9;
			while(k--){
				scanf("%d",&a);
				if(a>m)m=a;
			}
			ans+=m;
		}
		printf("%d\n",ans);
	}
	return 0;
}