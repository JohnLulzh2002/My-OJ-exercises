#include<stdio.h>
#define Min(a,b) (((a)<(b))?(a):(b))
int b[1000005],a[1000005];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,ans1=0,ans2=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",b+i);
		for(i=0;i<n-1;i++)
			a[i]=b[i]-b[i-1];
		//w
		for(i=1;i<n-1;i++){
			int p=1;
			if(i%2)p=-1;
			if(p*)<0&&p*<0){
				int p=min(,);
				ans1+=p;
				a[i]+=p;
			}
		}
	}
	printf("%d",t);
	return 0;
}