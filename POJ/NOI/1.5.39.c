#include <stdio.h>
int main(){
	int s=0,n,m,t;
	for(scanf("%d",&n);n>0;n--){
		if(n%7!=0){
			m=n;
			t=0;
			while(m>0){
				if(m%10==7)t=1;
				m/=10;
			}
			if(t==0)s+=n*n;
		}
	}
	printf("%d",s);
	return 0;
}