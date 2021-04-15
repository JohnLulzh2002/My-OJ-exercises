#include<stdio.h>
int main(){
	int n,a=0,b=0;
	scanf("%d",&n);
	while(n--){
		int i;
		scanf("%d",&i);
		if(i==25)
			a++;
		if(i==50){
			if(a>0){
				a--;
				b++;
			}
			else{
				printf("NO");
				return 0;
			}
		}
		if(i==100){
			if(b>0&&a>0){
				a--;
				b--;
			}
			else if(a>2)
				a-=3;
			else{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}