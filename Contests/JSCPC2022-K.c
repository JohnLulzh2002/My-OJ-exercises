#include<stdio.h>
int main(){
	int t,n,i,p2[31];
	n=1;
	for(i=0;i<30;i++){
		n*=2;
		p2[i]=n-1;
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("nunhehhe");
		for(i=29;i>-1;i--){
			int tmp=n/p2[i];
			n%=p2[i];
			while(tmp--)
				putchar('h');
			putchar('a');
		}
		putchar('\n');
	}
	return 0;
}