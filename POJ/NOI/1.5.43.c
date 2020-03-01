#include <stdio.h>
int main(){
	long long n;
	scanf("%d",&n);
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			printf("%d",n/i);
			return 0;
		}
	}
}