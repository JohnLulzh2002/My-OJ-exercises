#include <stdio.h>
int main(){
	char a[14];
	int b[10],i=1,j=0,s=0;
	for(scanf("%s",a);i<10;i++){
		b[i]=a[j]-'0';
		j++;
		if(a[j]=='-')j++;
	}
	for(i=1;i<10;i++)s+=i*b[i];
	s%=11;
	j=a[12]-'0';
	if(a[12]=='X')j=10;
	if(j-s){
		a[12]=s+'0';
		if(s==10)a[12]='X';
		printf("%s",a);
	}else printf("Right");
	return 0;
}