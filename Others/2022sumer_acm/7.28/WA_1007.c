#include<stdio.h>
long long p[100005],a[100005];
long long max(long long x,long long y)
{return x>y?x:y;}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,l,r,i,can,c=0;
		long long b,need;
		scanf("%d%lld%d",&n,&b,&k);
		need=0;
		for(i=0;i<n;i++){
			scanf("%lld",a+i);
			p[i]=need+=a[i];
		}
		l=0;r=k;
		can=1;
		while(c<n){
			// printf("&%d\t%d\n",l,r);
			if(a[l]<=b){
				b+=a[l];
				l++;r=l+k;c++;
				continue;
			}
			need=a[l]-b;
			can=0;
			for(i=l+1;i<r;i++){
				// printf("#%d\t%d\t%d\n",i,need,b);
				if(i>=n)break;
				if(b>=a[i]&&a[i]>=need){
					b+=p[i];
					if(l)b-=p[l-1];
					c+=i-l+1;
					r=l+k;
					l=i+1;
					can=1;
					break;
				}else
					need=max(a[i]-b,need-a[i]);
			}
			if(!can)break;
		}
		if(can)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}