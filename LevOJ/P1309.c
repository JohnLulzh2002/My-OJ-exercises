#include<stdio.h>
#include<string.h>
int main(){
	int n,l,i,j,max;
	short a[10001];
	char s[10001];
	while(scanf("%d",&n)==1){
	for(;n;n--){
		scanf("%s",s);
		l=strlen(s);
		a[0]=1;
		for(i=1;i<l;i++){
			max=1;
			a[i]=1;
			for(j=0;j<i;j++){
				if(s[i]>s[j]&&a[j]>=max){
					max=a[j];
					a[i]=max+1;
				}
			}
		}
		max=1;
		l--;
		for(;l+1;l--){
			if(a[l]>max)
				max=a[l];
		} 
		printf("%d\n",max);
	}
	}
	return 0;
}
