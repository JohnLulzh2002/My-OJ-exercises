#include<stdio.h>
int a,b,c;
long long f(int x){
	return (long long)a*x*x+b*x+c;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x0,x1,y0,y1,y2;
		scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&x0,&x1,&y0,&y1,&y2);
		int ans=0;
		if(f(x0)>y0&&(f(x1)<y0||(f(x1)<=y2&&f(2*x1-x0)<y0)))
			ans=1;
		if(f(x1)==y0)ans=0;
		if(ans)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}