#include<stdio.h>
int main(){
	int m,n,i,j,a,ans=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)for(j=0;j<n;j++){
		scanf("%d",&a);
		if(!i || !j || n-1==j || m-1==i)
			ans+=a;
	}
	printf("%d",ans);
	return 0;
}