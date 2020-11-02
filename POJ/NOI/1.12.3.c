#include<stdio.h>
int main(){
	int n,c,ct=0;
	float t;
	char nm[9];
	for(scanf("%d",&n);n;n--){
		scanf("%s%f%d",nm,&t,&c);
		if(t>=37.5&&c){
			printf("%s\n",nm);
			ct++;
		}
	}
	printf("%d",ct);
	return 0;
}