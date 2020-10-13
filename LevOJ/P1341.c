#include<stdio.h>
int main(){
	int n,s,a,b,c;
	while(scanf("%d",&n)==1){
		for(s=0;n;n--){
			scanf("%d+%d=%d",&a,&b,&c);
			if(a+b!=c)
				s=1;
		}
		if(s==1) printf("Wrong Answer\n");
		else printf("Accepted\n");
	}
	return 0;
}
