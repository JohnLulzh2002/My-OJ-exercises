#include<stdio.h>
int main(){
	int i,n,a[10002],count,m1,m2,m1i,m2i,ans;
	scanf("%d",&n);
	do{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		count=n-1;
		ans=0;
		while(count--){
			m1=m2=1001;
			for(i=0;i<n;i++){
				if(a[i]<m1){
					m2=m1;
					m2i=m1i;
					m1=a[i];
					m1i=i;
					continue;
				}
				if(a[i]<m2){
					m2=a[i];
					m2i=i;
				}
			}
			ans+=a[m1i]=m1+m2;
			a[m2i]=2000;
		}
		printf("%d\n",ans);
		scanf("%d",&n);
	}while(n);
	return 0;
}