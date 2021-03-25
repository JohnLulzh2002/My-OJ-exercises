#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c;
		int i,j,n,k,a[28]={},b[28]={};
		scanf("%d%d%*c",&n,&k);
		while(scanf("%c",&c),c!='\n')
			a[c-'a']++;
		while(scanf("%c",&c),c!='\n')
			b[c-'a']++;
		for(i=0;i<26;i++){
			a[i]-=b[i];
			if(a[i]<0 || a[i]%k){
				printf("No\n");
				break;
			}else{
				a[i+1]+=a[i];
				a[i]=0;
			}
		}
		if(i>=26)
			printf("Yes\n");
	}
	return 0;
}