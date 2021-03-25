#include<stdio.h>
#define MAX 3001
int a[MAX];
int main(){
	int i,t;
	for(i=1;i<MAX;i++)
		a[i]=i*(i+1)/2;
	scanf("%d",&t);
	while(t--){
		int x,l=1,r=MAX-1,ans=0;
		scanf("%d",&x);
		if(x==1){
			printf("1\n");
			continue;
		}
		while(l<r-1){
			int m=(l+r)/2;
			if(a[m]<x){
				l=m;
			}else if(a[m]>x){
				r=m;
			}else{
				ans=m;
				break;
			}
		}
		if(!ans){
			if(a[r]-1>x)ans=r;
			else ans=r+1;
		}
		printf("%d\n",ans);
	}
	return 0;
}