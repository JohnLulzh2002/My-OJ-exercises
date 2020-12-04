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
	int la,lb,a[202],b[202],i,j,t;
	while(~scanf("%s%s",ca,cb)){
		la=strlen(ca);
		lb=strlen(cb);
		if(la<lb){
			printf("%s\n",ca);
			continue;
		}
		for(i=0;i<la;i++)
			a[i]=ca[i]-'0';
		a[i]=0;
		for(i=0;i<lb;i++)
			b[i]=cb[i]-'0';

		for(i=0;la-i>=lb;i++){
			for(t=0;minus(a+i,b,lb);t++)
				for(j=0;j<lb;j++)
					a[i+j]=ans[j];
			if(a[i]){
				a[i+1]+=10*a[i];
				a[i]=0;
			}
		}
		if(a[i]>9){
			a[i-1]=a[i]/10;
			a[i--]%=10;
		}

		while(!a[i]&&i<la)i++;
		if(i==la)printf("0");
		for(;i<la;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}