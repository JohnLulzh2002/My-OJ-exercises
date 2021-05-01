#include<stdio.h>
char a[11],b[1000001];
int main(){
	int i=0,j,c=0,f,l=0;
	for(scanf("%s",a);a[l];l++)
		if(a[l]<90)a[l]+=32;
	scanf("%*c");
	for(scanf("%[^\n]",b);b[i];i++)
		if(b[i]<91&&b[i]>64)b[i]+=32;
	for(i=j=0;b[j];j++){
		if(a[i]==b[j]){
			i++;
			if(i==l){
				i=0;
				if((b[j+1]!=' '&&b[j+1])||(j-l>-1&&b[j-l]!=' '))continue;
				if(!c)f=j-l+1;
				c++;
			}
		}else
			i=0;
	}
	if(c)printf("%d %d",c,f);
	else printf("-1");
	return 0;
}