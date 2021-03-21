#include<stdio.h>
int main(){
	int n,count=0;
	char c;
	scanf("%d%*c",&n);
	while(n--){
		scanf("%c",&c);
		if(c=='D')count--;
		else count++;
	}
	if(count>0)printf("Anton");
	if(count==0)printf("Friendship");
	if(count<0)printf("Danik");
	return 0;
}