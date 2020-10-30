#include<stdio.h>
int s[10001],n,k;
int fine(int x){
	int p[10001],i=0,r=k;
	for(;i<n;i++)p[i]=s[i];
	i=0;
	while(r){
		p[i]-=x;
		if(p[i]<0)	i++;
		else		r--;
		if(i>=n)return 0;
	}
	return 1;
}
int main(){
	int i=0;
	float in;
	scanf("%d%d",&n,&k);
	for(;i<n;i++){
		scanf("%f",&in);
		s[i]=100*in;
	}
	if(!fine(1)){
		printf("0.00");
		return 0;
	}
	int l=1,r=10000001,m;
	while(r-l>1){
		m=(l+r)/2;
		if(fine(m))
			l=m;
		else r=m;
	}
	if(!fine(m))m--;
	float ans=m;
	ans/=100;
	printf("%.2f",ans);
	return 0;
}