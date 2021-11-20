#include<stdio.h>
int j[1000002];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,p,ans=1;
		scanf("%d",&p);
		j[1]=1;
		for(i=2;i<p;i++)
			ans+=j[i]=j[p%i]+1;
		printf("%lf\n",ans/(p-1.0));
	}
	return 0;
}