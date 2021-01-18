#include<stdio.h>
#define MAX 50000
int a[3002],b[MAX];
int main(){
	int i=1,j=2;
	for(;i<3001;j++){
		if(b[j])	continue;
		a[i++]=j;
		int count=0;
		for(int k=j+1;k<MAX;k++){
			if(!b[k])	count++;
			if(count==j){
				count=0;
				b[k]=1;
			}
		}
	}
	int n;
	scanf("%d",&n);
	while(n){
		printf("%d\n",a[n]);
		scanf("%d",&n);
	}
	return 0;
}