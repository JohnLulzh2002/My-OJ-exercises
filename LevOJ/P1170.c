#include<stdio.h>
#define MAX 1000001
int isprime[MAX]={0,0,0};
int count[MAX]={0,0,0};
int main(){
	int i,j,n,t1,t2,t,digit,s=0;
	for(i=2;i<MAX;i++)
		if(!isprime[i]){
			for(j=2*i;j<MAX;j+=i)
				isprime[j]=-1;
			isprime[i]=1;
		}else
			isprime[i]=0;
	for(i=1;i<MAX;i++){
		if(isprime[i]){
			t=i;
			digit=0;
			while(t){
				digit+=(t%10);
				t/=10;
			}
			if(isprime[digit])
				s++;
		}
		count[i]=s;
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&t1,&t2);
		printf("%d\n",count[t2]-count[t1-1]);
	}
	return 0;
}