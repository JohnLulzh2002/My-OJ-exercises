#include<stdio.h>
int main(){
	int t,m,a,b,value[1001]={},i;
	scanf("%d%d",&t,&m);
	while(m--){
		scanf("%d%d",&a,&b);
		int j;
		for(j=t-a;j>-1;j--)
			if(value[j]+b>value[j+a])
				value[j+a]=value[j]+b;
	}
	printf("%d",value[t]);
	return 0;
}