#include <stdio.h>
int main(){
	int n,k,a[100],i=0,c,j;
	float b[100],s,ans;
	for(scanf("%d%d",&n,&k);i<n;i++)
		scanf("%d%f",&a[i],&b[i]);
	for(i=0;i<k;i++){
		s=0;
		for(j=0;j<n;j++)
			if(b[j]>s){
				s=b[j];
				c=j;
			}
		b[c]=0;
		ans=s;
	}
	printf("%d %g",a[c],ans);
	return 0;
}