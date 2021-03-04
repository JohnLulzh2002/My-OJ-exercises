#include<stdio.h>
#include<string.h>
int a[2002],b[2002],c[4004];
int main(){
	char ca[2002],cb[2002];
	scanf("%s%s",ca,cb);
	int max=0,min=0,la,lb,i,j;
	la=strlen(ca);lb=strlen(cb);
	for(i=0;i<la;i++)a[i]=ca[la-1-i]-'0';
	for(i=0;i<lb;i++)b[i]=cb[lb-1-i]-'0';

	for(i=0;i<la;i++){
		for(j=0;j<lb;j++){
			c[i+j]+=a[i]*b[j];
			if(i+j>max)max=i+j;
		}
		for(j=0;j<=max;j++)if(c[j]>9){
			c[j+1]+=c[j]/10;
			c[j]%=10;
			if(j+1>max)max=j+1;
		}
	}
	while(max>0 && !c[max])max--;
	while(max>=0)printf("%d",c[max--]);
	return 0;
}