#include<stdio.h>
int n,a[11];
int main(){
	scanf("%d",&n);
	if(n<10||n>30){
		printf("0");
		return 0;
	}
	if(n==30){
		printf("1\n3 3 3 3 3 3 3 3 3 3");
		return 0;
	}
	int s=0,num=0,i;
	while(s<20){
		if(s+10==n)num++;
		a[i=9]++;
		s++;
		while(a[i]>2&&i){
			a[i--]=0;
			a[i]++;
			s-=2;
		}
	}
	printf("%d\n",num);
	s=0;
	for(i=0;i<10;i++)a[i]=0;
	while(s<20){
		if(s+10==n){
			for(i=0;i<10;i++)
				printf("%d ",a[i]+1);
			printf("\n");
		}
		a[i=9]++;
		s++;
		while(a[i]>2&&i){
			a[i--]=0;
			a[i]++;
			s-=2;
		}
	}
	return 0;
}