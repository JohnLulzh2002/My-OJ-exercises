#include<stdio.h>
#define MAX 600000000
int factNum,fact[15];
int count(int n){
	char use[15]={},sgn;
	int i,pi;
	long long ans=0;
	while(1){
		use[0]++;
		pi=1;
		sgn=-1;
		for(i=0;use[i]>1;i++){
			use[i]=0;
			use[i+1]++;
		}
		if(use[factNum])break;
		for(i=0;i<factNum;i++)
			if(use[i]){
				sgn=-sgn;
				pi*=fact[i];
			}
		ans+=sgn*(n/pi);
	}
	return n-ans;
}
int main(){
	int m,k;
	while(~scanf("%d%d",&m,&k)){
		int l=1,r=MAX,mid,i;
		factNum=0;
		for(i=2;m>1;i++){
			if(m%i==0)fact[factNum++]=i;
			while(m%i==0)m/=i;
		}
		while(l<r){
			mid=(l+r)/2;
			if(count(mid)>k)r=mid-1;
			if(count(mid)<k)l=mid+1;
			if(count(mid)==k)r=mid;
		}
		printf("%d\n",l);
	}
	return 0;
}