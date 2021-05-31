#include<stdio.h>
#include<math.h>
void mult2(int a[]){
	int i;
	for(i=0;i<500;i++)
		a[i]*=2;
	for(i=0;i<500;i++){
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
}
void square(int a[]){
	int i,j,ans[502]={};
	for(i=0;i<500;i++)
		for(j=0;j+i<500;j++)
			ans[i+j]+=a[i]*a[j];
	for(i=0;i<500;i++){
		a[i]=ans[i]%10;
		ans[i+1]+=ans[i]/10;
	}
}
int main(){
	int p,a[502]={1},i,j;
	const int max=1<<25;
	scanf("%d",&p);
	printf("%d\n",(int)(p*log10(2))+1);
	while(p<<6>>6){
		square(a);
		if(p&max)mult2(a);
		p<<=1;
	}
	a[0]--;
	for(i=9;i+1;i--){
		for(j=49;j+1;j--)
			printf("%d",a[i*50+j]);
		printf("\n");
	}
	return 0;
}