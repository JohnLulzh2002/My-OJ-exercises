#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000002];
int main(){
	int n,i;
	long long s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
		s+=a[i];
	}
	sort(a,a+n);
	int ans=n-(upper_bound(a,a+n,(double)s/n)-a);
	for(n--;n>-1;n--){
		s-=a[n];
		ans=max(ans,n-(upper_bound(a,a+n,(double)s/n)-a));
	}
	printf("%d\n",ans);
	return 0;
}