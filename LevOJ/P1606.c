#include<stdio.h>
int main(){
	int t,n,a,b,c,N;
	for(scanf("%d",&t);t>0;t--){
		b=c=0;//c>b>a
		scanf("%d",&N);
		for(n=N;n>0;n--){
			scanf("%d",&a);
			if(a>b) b=a;
			if(b>c){a=b;b=c;c=a;}
		}
		N-=2;b--;
		b=b<N?b:N;
		printf("%d\n",b);
	}
	return 0;
}
