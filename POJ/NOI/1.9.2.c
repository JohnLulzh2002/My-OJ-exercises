#include<stdio.h>
int main(){
	int score[101],n,t,max=0,i=0;
	char name[101][22];
	scanf("%d",&n);
	for(;i<n;i++)scanf("%d %s",&score[i],name[i]);
	for(i=0;i<n;i++)
		if(score[i]>max){
			t=i;
			max=score[i];
		}
	printf("%s",name[t]);
	return 0;
}