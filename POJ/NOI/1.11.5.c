#include<stdio.h>
#define pi 3.1415926536
double s[10001];
int n,f;
int fine(double x){
	double p[10001];
	int i=0,r=f;
	for(;i<n;i++)p[i]=s[i];
	i=0;
	while(r){
		p[i]-=x;
		if(p[i]<0)
			i++;
		else r--;
		if(i>=n)return 0;
	}
	return 1;
}
int main(){
	int b,i=0;
	double sum=0;
	scanf("%d%d",&n,&f);f++;
	for(;i<n;i++){
		scanf("%d",&b);
		sum+=s[i]=pi*b*b;
	}
	double l=0.00004,r=sum/f,m;
	while(r-l>0.00003){
		m=l/2+r/2;
		if(fine(m))
			l=m;
		else r=m;
	}
	printf("%.3f",m);
	return 0;
}