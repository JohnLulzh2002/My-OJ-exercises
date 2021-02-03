#include<stdio.h>
int main(){
	int i,n,a[100],b[100],s[100],head,fin;
	while(~scanf("%d",&n)){
		for(i=0;i<n;i++){
			a[i]=i+1;
			scanf("%d",&b[i]);
		}
		i=head=fin=0;
		int t=1;
		while(i<n || head){
			while(head && b[fin]==s[head-1]){
				fin++;
				head--;
			}
			if(i==n&&head){
				t=0;
				printf("No\n");
				break;
			}
			if(i<n){
				s[head++]=a[i++];
			}
		}
		if(t)	printf("Yes\n");
	}
	return 0;
}