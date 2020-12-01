#include<stdio.h>
int main(){
	int n,m,i,a[102],t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		if(m<a[0])
			printf("Failed\n");
		else{
			for(i=0;i<n;i++){
				m-=a[i];
				if(m<0){
					printf("%d\n",i);
					break;
				}
			}
			if(i==n)
				printf("Complete\n");
		}
	}
	return 0;
}