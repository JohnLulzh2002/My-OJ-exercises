#include<stdio.h>
int main(){
	int n,x,s,d,ld,lm,rd,rm,i,c[488]={};
	scanf("%d%d",&n,&x);
	while(n--){
		scanf("%d%d",&s,&d);
		for(i=0;i<481;i++,s--){
			if(s<0&&s+d<0)break;
			if(s<0){
				c[i]+=(s+d)/x+1;
				continue;
			}
			ld=s/x;
			rd=(s+d)/x;
			if(s%x==0)
				c[i]++;
			c[i]+=rd-ld;
		}
	}
	int minc=c[0],min=0;
	for(i=1;i<481;i++)
		if(c[i]<minc){
			minc=c[i];
			min=i;
		}
	printf("%d %d\n",min,minc);
	return 0;
}