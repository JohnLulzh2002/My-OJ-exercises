#include <stdio.h>
int main()
{
	int n,sum=0,i,j,d=0,t=0;
	scanf("%d",&n);
	for(i=1;t==0;i++)
		for(j=1;j<=i && t==0;j++){
			d++;
			if(d==n)    t=1;
			sum+=i;
		}
	printf("%d",sum);
	return 0;
}