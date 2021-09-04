#include<stdio.h>
const int p[]={0,7,27,41,49,63,78,108};
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,ans=0,a;
		scanf("%d",&n);
		while(n--){
			scanf("%d",&a);
			ans+=p[a];
		}
		if(ans>=120)
			ans-=50;
		else if(ans>=89)
			ans-=30;
		else if(ans>=69)
			ans-=15;
		printf("%d\n",ans);
	}
	return 0;
}