#include<stdio.h>
int main(){
	int n,c,pass=0,excel=0;
	scanf("%d",&n);
	c=n;
	while(n--){
		int a;
		scanf("%d",&a);
		if(a>=60)	pass++;
		if(a>=85)	excel++;
	}
	pass=pass*100.0/c+0.5;
	excel=excel*100.0/c+0.5;
	printf("%d%%\n%d%%",pass,excel);
	return 0;
}