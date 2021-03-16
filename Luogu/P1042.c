#include<stdio.h>
int main(){
	char c;
	int i,f1,f2,w1=0,w2=0,l1=0,l2=0,a[3333][2],count=0;
	flag:
	while(scanf("%c",&c),c!='E'){
		switch(c){
			case 'W':
				w1++;w2++;t=0;break;
			case 'L':
				l1++;l2++;t=0;break;
			default:
				goto flag;
		}
		f1=(w1-l1>1||w1-l1<-1);
		f2=(w2-l2>1||w2-l2<-1);
		if((w1>10||l1>10)&&f1){
			printf("%d:%d\n",w1,l1);
			w1=l1=0;
		}
		if((w2>20||l2>20)&&f2){
			a[count][0]=w2;
			a[count++][1]=l2;
			w2=l2=0;
		}
	}
	printf("%d:%d\n",w1,l1);
	a[count][0]=w2;
	a[count++][1]=l2;
	for(i=0;i<count;i++)
		printf("\n%d:%d",a[i][0],a[i][1]);
	return 0;
}