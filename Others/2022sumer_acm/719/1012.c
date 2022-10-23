#include<stdio.h>
int n,i,a[1000005];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<=n;i++)
			scanf("%d",a+i);
		for(i=n;i;i--)
			a[i-1]+=a[i]/2;
		if(a[0])printf("Alice\n");
		else printf("Bob\n");
	}
	return 0;
}