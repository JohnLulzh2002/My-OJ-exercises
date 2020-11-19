#include<stdio.h>
int main(){
	int t,a,b;
	char c;
	while(~scanf("%d",&t))
	while(t--){
		scanf("\n%c%d%d",&c,&a,&b);
		switch(c){
			case '+':printf("%d\n",a+b);break;
			case '-':printf("%d\n",a-b);break;
			case '*':printf("%d\n",a*b);break;
			case '/':
				if(a%b)
					printf("%.2f\n",(double)a/b);
				else
					printf("%d\n",a/b);
				break;
		}
	}
	return 0;
}