#include <stdio.h>
int main(){
	int n,l,h,t=0,m=0;
	for(scanf("%d",&n);n;n--){
		scanf("%d %d",&h,&l);
		if(h<141&&h>89&&l<91&&l>59)t++;
		else{
			if(t>m)m=t;
			t=0;
		}
	}
	if(t>m)m=t;
	printf("%d",m);
	return 0;
}