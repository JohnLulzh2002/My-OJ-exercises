#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b){
	return *(int*)a-*(int*)b; 
}
int main(){
	int t,n,a[7],i;
	scanf("%d",&t);
	while(t--){
		n=0;
		for(i=0;i<6;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,6,sizeof(int),cmp);
		if(a[0]+a[1]+a[5]==a[2]+a[3]+a[4]||
			a[0]+a[4]+a[5]==a[1]+a[2]+a[3]){
				printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
} 
