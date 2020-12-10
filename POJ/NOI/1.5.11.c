#include<stdio.h>
int main(){
	int k,a,q=0,w=0,e=0;
	for(scanf("%d",&k);k>0;k--){
		scanf("%d",&a);
		if(a==1)q++;
		if(a==5)w++;
		if(a==10)e++;
	}
	printf("%d\n%d\n%d",q,w,e);
	return 0;
}
