#include<stdio.h>
int main(){
	int n,a[10002]={},i,j,ct=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&j);
		a[j]++;
	}
	for(i=2;i<10001;i++)
		if(a[i])
			for(j=1;j<i;j++)
				if(a[j]&&a[i-j])
					if((j*2-i)||a[j]>1){
					ct++;
					break;
				}
	printf("%d\n",ct);
	return 0;
}