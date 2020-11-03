#include<stdio.h>
int main(){
	int T,i,a,b;
	//while(scanf("%d",&T)==1){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		for(i=1;1;i++){
			if(i%2){
				a-=i;
				if(a<0){
					printf("A\n");
					break;
				}
			}
			else{
				b-=i;
				if(b<0){
					printf("B\n");
					break;
				}
			}
	}	}
	//}
	return 0;
}
