#include <stdio.h>
int main(){
	int i=49,a[3];
	for(;;i++){
		a[0]=i%7;
		a[1]=i/7%7;
		a[2]=i/49;
		if(a[0]==i/81&&a[1]==i/9%9&&a[2]==i%9){
			printf("%d\n",i);
			printf("%d%d%d\n",a[2],a[1],a[0]);
			printf("%d%d%d",a[0],a[1],a[2]);
			return 0;
		}
	}
}