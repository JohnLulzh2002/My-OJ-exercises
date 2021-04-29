#include<stdio.h>
#define MAX 1000000
char a[MAX+2];
int prime[MAX/5];
int count[MAX];
int main(){
	int i,j,n=1,l,r;
	for(i=2;i<MAX;i++){
		count[i]=count[i-1];
		if(!a[i]){
			int t=0,m;
			prime[n++]=m=i;
			while(m){
				t+=m%10;
				m/=10;
			}
			l=0;r=n;
			do{
				m=(l+r)/2;
				if(prime[m]<t)l=m+1;
				if(prime[m]>t)r=m-1;
			}while(l<r&&prime[m]!=t);
			if(prime[m]==t||prime[r]==t)
				count[i]++;
		}
		for(j=1;j<n&&prime[j]*i<=MAX;j++)
			a[prime[j]*i]++;
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&l,&r);
		printf("%d\n",count[r]-count[l-1]);
	}
	return 0;
}