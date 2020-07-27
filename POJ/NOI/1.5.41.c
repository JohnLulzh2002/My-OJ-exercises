#include <stdio.h>
int main(){
	int l,r,s=0,t;
	for(scanf("%d %d",&l,&r);l<=r;l++)
		for(t=l;t;t/=10)
			if(t%10==2)s++;
	printf("%d",s);
	return 0;
}