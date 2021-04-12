#include<stdio.h>
int main(){
	int n,a[101],i,j,k,cnt=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		t=0;
		for(j=0;j<n && !t;j++){
			if(j==i)continue;
			for(k=j+1;k<n && !t;k++)
				if(a[i]==a[j]+a[k]&&i-k)
					t=1;
		}
		cnt+=t;
	}
	printf("%d",cnt);
	return 0;
}