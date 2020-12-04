#include<stdio.h>
#include<string.h>
int ans[202];
int minus(int a[],int b[],int l){
	int i;
	for(i=l-1;i>-1;i--)
		ans[i]=a[i]-b[i];
	for(i=l-1;i;i--){
		if(ans[i]<0){
			ans[i-1]--;
			ans[i]+=10;
		}
	}
	if(ans[0]<0)return 0;
	return 1;
}//>=:1	<:0
int main(){
	char ca[202],cb[202];
	int la,lb,lc,a[202],b[202],c[202],i,j,t;
	while(~scanf("%s%s",ca,cb)){
		la=strlen(ca);
		lb=strlen(cb);
		if(la<lb){
			printf("0\n");
			continue;
		}
		for(i=0;i<la;i++)
			a[i]=ca[i]-'0';
		for(i=0;i<lb;i++)
			b[i]=cb[i]-'0';

		for(lc=i=0;la-i>=lb;i++){
			for(t=0;minus(a+i,b,lb);t++)
				for(j=0;j<lb;j++)
					a[i+j]=ans[j];
			c[lc++]=t;
			if(a[i]){
				a[i+1]+=10*a[i];
				a[i]=0;
			}
		}
		for(i=0;!c[i]&&i<lc;i++);
		if(i==lc)printf("0");
		for(;i<lc;i++)
			printf("%d",c[i]);
		printf("\n");
	}
	return 0;
}