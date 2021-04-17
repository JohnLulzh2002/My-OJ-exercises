#include<stdio.h>
const int map[]={6,2,5,5,4,5,6,3,7,6};
int need(int n){
	if(n<10)return map[n];
	return need(n/10)+map[n%10];
}
int main(){
	int n,i,j,ans=0;
	scanf("%d",&n);
	for(i=0;i<1111;i++)for(j=0;j<1111;j++)
		if(need(i)+need(j)+need(i+j)==n-4)
			ans++;
	printf("%d",ans);
	return 0;
}