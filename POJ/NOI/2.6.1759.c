#include<stdio.h>
int main(){
	int n,i,max=0,a[1001]={-1},len[1001]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		len[i]=-1;
		int j;
		for(j=0;j<i;j++)
			if(a[j]<a[i]&&len[j]>len[i])
				len[i]=len[j];
		if((++len[i])>max)max=len[i];
	}
	printf("%d",max);
	return 0;
}