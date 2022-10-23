#include<stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int e,l,r,b,ans1=0,ans2=0;
		scanf("%d%d%d%d",&e,&l,&r,&b);
		ans2=l+r;
		if(e<b)
			ans2+=2*e+1;
		else
			ans2+=e+b;
		ans1=e;
		if(b){
			ans1++;
			if(l)l--;
			if(r)r--;
		}
		int q=min(l,r);
		ans1+=l+r-q;
		printf("%d %d\n",ans1,ans2);
	}
	return 0;
}