#include <stdio.h>
int main(){
	int i,n,a[1000],b,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		scanf("%d",&b);
		s+=a[i]*b;
	}
	printf("%d",s);
	return 0;
}