#include<stdio.h>
#include<string.h>
int main(){
	char a[101],b[101];
	int c[101],i,j,la,lb,l,p=0;
	scanf("%s%s",a,b);
	la=strlen(a);lb=strlen(b);
	l=la>lb?la:lb;
	for(i=0;i<=l;i++){
		if(i<la)p+=a[la-1-i]-'0';
		if(i<lb)p+=b[lb-1-i]-'0';
		c[i]=p%10;
		p/=10;
	}
	for(i=0;i<l;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(!c[l] && l)l--;
	for(;l+1;l--)printf("%d",c[l]);
	return 0;
}