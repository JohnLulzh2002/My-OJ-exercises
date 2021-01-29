#include<stdio.h>
int main(){
	int t,i,j,n,m,a[101],count,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		count=0;
		for(i=0;i<m;i++){
			scanf("%d",&b);
			for(j=0;j<n;j++)
				if(b==a[j]){
					count++;
					break;
				}
		}
		printf("%d\n",count);
	}
	return 0;
}