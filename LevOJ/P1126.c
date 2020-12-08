#include<stdio.h>
void swap(int*a,int*b){
	*a+=*b;
	*b=*a-*b;
	*a-=*b;
}
int a[]={1,2,3,4,5,6,7,8,9},n;
void NextP(int depth){
	int i;
	if(depth==n-1){
		for(i=0;i<n;i++)
			printf("%d",a[i]);
		printf("\n");
		return;
	}
	NextP(depth+1);
	for(i=depth+1;i<n;i++){
		swap(&a[depth],&a[i]);
		NextP(depth+1);
		swap(&a[depth],&a[i]);
	}
}
int main(){
	while(~scanf("%d",&n))
		NextP(0);
	return 0;
}