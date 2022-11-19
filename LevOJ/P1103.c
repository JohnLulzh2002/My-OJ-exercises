#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,a=1,s=1;
		for(i=1;i<=n;i++)
			s+=a*=i;
		printf("%d\n",s);
	}
	return 0;
}