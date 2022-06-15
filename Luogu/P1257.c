#include<stdio.h>
#include<math.h>
double x[10002],y[10002];
double dis(int i,int j){
	return sqrt((x[i]-x[j])*(x[i]-x[j])+
		(y[i]-y[j])*(y[i]-y[j]));
}
int main(){
	int n,i,j;
	double ans=1e9;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",x+i,y+i);
	for(i=0;i<n-1;i++)	for(j=i+1;j<n;j++)
		if(dis(i,j)<ans) ans=dis(i,j);
	printf("%.4lf",ans);
	return 0;
}