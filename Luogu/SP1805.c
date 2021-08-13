#include<stdio.h>
#define MAX 111111
#define Max(a,b) (((a)>(b))?(a):(b))
int a[MAX];
int main(){
	int n;
	while(scanf("%d",&n),n){
		int i;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		int ans=1,l[MAX],r[MAX];
		l[0]=-1;
		for(i=1;i<n;i++){
			l[i]=i-1;
			while(l[i]+1&&a[i]<=a[l[i]])
				l[i]=l[l[i]];
		}
		r[n-1]=n;
		for(i=n-2;i+1;i--){
			r[i]=i+1;
			while(r[i]<n&&a[i]<=a[r[i]])
				r[i]=r[r[i]];
		}
		for(i=0;i<n;i++)
			ans=Max(ans,a[i]*(r[i]-l[i]-1));
		printf("%d\n",ans);
	}
	return 0;
}