#include<stdio.h>
long long value[10000001];
int main(){
	int t,m;
	scanf("%d%d",&t,&m);
	int a,b,i;
	while(m--){
		scanf("%d%d",&a,&b);
		int j;
		for(j=0;j<=t-a;j++)
			if(value[j]+b>value[j+a])
				value[j+a]=value[j]+b;
	}
	printf("%lld\n",value[t]);
	return 0;
}