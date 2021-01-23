#include<stdio.h>
int main(){
	int n,i,j,finished,head,step,operation[20];
	char a[10],b[10],stack[10];
	while(~scanf("%d %s %s",&n,b,a)){
		finished=step=0;head=-1;
		for(i=0;i<n;i++){
			stack[++head]=b[i];
			operation[step++]=0;	//0:in,1:out
			while(head!=-1 && stack[head]==a[finished]){
				finished++;
				head--;
				operation[step++]=1;
			}
		}
		if(head>=0)	printf("No.\n");
		else{
			printf("Yes.\n");
			for(i=0;i<step;i++){
				if(operation[i])	printf("out\n");
				else	printf("in\n");
			}
		}
		printf("FINISH\n");
	}
	return 0;
}