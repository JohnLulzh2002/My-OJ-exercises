#include<stdio.h>
#include<string.h>
int main(){
	char a[201],b[201];
	int la,lb,l,i=0,p=0,c[201];
	scanf("%s %s",&a,&b);
	la=strlen(a);	lb=strlen(b);
	for(l=la>lb?la:lb;i<=l;i++){
		if(i<la)p+=(int)a[la-i-1]-'0';
		if(i<lb)p+=(int)b[lb-i-1]-'0';
		if(p<10){
			c[i]=p;
			p=0;			
		}
		else{
			c[i]=p-10;
			p=1;
		}
	}
	for(i=l;c[i]==0&i>0;i--);
	for(;i>=0;i--)printf("%d",c[i]);
	return 0;
}
