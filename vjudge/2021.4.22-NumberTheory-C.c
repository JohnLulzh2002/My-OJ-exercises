#include<stdio.h>
#include<math.h>
#define MAX 1000000
double p[MAX+2],q[MAX+2];
int main(){
	// freopen("1.txt","w",stdout);
	int n,i;
	p[0]=q[0]=0;
	for(i=1;i<=MAX;i++){
		p[i]=p[i-1]+(1-p[i-1])/((long long)i*(i+1));
		q[i]=q[i-1]+log10(i)+log10(i+1);
	}
	while(~scanf("%d",&n)){
	// for(n=1;n<MAX;n++){
		printf("%lf ",p[n]);
		printf("%d\n",(int)q[n]);
	}
	return 0;
}