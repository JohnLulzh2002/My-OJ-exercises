#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int main(){
	int n,a[6],ans;
	while(~scanf("%d",&n)){
		ans=0;
		while(n-6174){
			a[0]=n%10;
			n/=10;
			a[1]=n%10;
			n/=10;
			a[2]=n%10;
			n/=10;
			a[3]=n;
			qsort(a,4,sizeof(int),cmp);
			n=a[3]*1000+a[2]*100+a[1]*10+a[0]-a[3]-10*a[2]-100*a[1]-1000*a[0];
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}