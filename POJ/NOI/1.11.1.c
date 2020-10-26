#include<stdio.h>
int main(){
	int a[100001],n,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(scanf("%d",&m);m;m--){
		int l=0,r=n-1,t=1,mid,q;
		scanf("%d",&q);
		while(l<r-1){
			mid=(l+r)/2;
			if(a[mid]>q)r=mid;
			if(a[mid]<q)l=mid;
			if(a[mid]==q){
				printf("%d\n",q);
				t=0;
				break;
			}
		}
		if(t){
			if(q-a[l]>a[r]-q)
				printf("%d\n",a[r]);
			else printf("%d\n",a[l]);
		}
	}
	return 0;
}