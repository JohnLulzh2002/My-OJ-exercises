#include<stdio.h>
int main(){
	int n,x,i,j,s=0,ans[1001]={},w,l,u;
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&l,&w,&u);
		s+=l;
		for(j=x;j>=u;j--)
			if(ans[j]<ans[j-u]+w-l)
				ans[j]=ans[j-u]+w-l;
	}
	printf("%lld",5ll*(s+ans[x]));
	return 0;
}