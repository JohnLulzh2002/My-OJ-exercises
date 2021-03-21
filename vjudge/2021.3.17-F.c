#include<stdio.h>
int p[200001];
int main(){
	int n,a,b,k,i,count=0,ans=0;
	char c;
	scanf("%d%d%d%d%*c",&n,&a,&b,&k);
	for(i=1;i<=n;i++){
		scanf("%c",&c);
		if(c=='0')count++;
		else	count=0;
		if(count==b){
			p[ans++]=i;
			count=0;
		}
	}
	if(count==b)
		p[ans++]=i;
	ans=ans-a+1;
	printf("%d\n",ans);
	while(ans--)
		printf("%d ",p[ans]);
	return 0;
}