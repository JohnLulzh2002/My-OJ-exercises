#include<stdio.h>
int main(){
	int t,m;
	while(~scanf("%d%d",&t,&m)){
		int a,b,value[1001]={},i;
		while(m--){
			scanf("%d%d",&a,&b);
			int j;
			for(j=t-a;j>-1;j--)
				if(value[j]+b>value[j+a])
					value[j+a]=value[j]+b;
		}
		printf("%d\n",value[t]);
	}
	return 0;
}