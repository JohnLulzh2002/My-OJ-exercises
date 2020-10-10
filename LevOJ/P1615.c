#include<stdio.h>
int main(){
	int a[1002]={},i,j;
	for(i=1;i<1001;i++)
		for(j=i;j<1001;j+=i)
			a[j]++;
	j=0;
	for(i=1;i<1001;i++){
		if(a[i]==4)
			j++;
		a[i]=j;
	}
	for(scanf("%d",&i);i>0;i--){
		scanf("%d",&j);
		printf("%d\n",a[j]);
	}
	return 0;
}
