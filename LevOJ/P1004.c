#include<stdio.h>
#include<string.h>
int main(){
	const int MAX=42;
	char a[MAX],b[MAX],c[MAX];
	int la,lb,l,p=0,i=0;
	scanf("%s%s",a,b);
	la=strlen(a);	lb=strlen(b);
	for(l=la>lb?la:lb;i<l;i++){
		if(i<la)p+=a[la-i-1]-'0';
		if(i<lb)p+=b[lb-i-1]-'0';
		c[i]=p%10+'0';
		p/=10;
	}
	if(p){
		c[i]='1';
		i++;
	}
	i--;
	for(;i+1;i--)printf("%c",c[i]);
	return 0;
}
