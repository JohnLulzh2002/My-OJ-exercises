#include<stdio.h>
#include<string.h>
int main(){
	int t,i,j;
	char a[200001],b[100001];
	int next[100001],la,lb;
	while(~scanf("%[^\n]",a)){
		scanf("%*c");
		scanf("%[^\n]",b);
		scanf("%*c");
		la=strlen(a);lb=strlen(b);
		for(i=0;i<la;i++)
			a[la+i]=a[i];
		la*=2;
		t=1;

		next[0]=-1;
		i=1;j=0;
		while(i<lb){
			if(b[i]==b[j])
				next[i++]=j++;
			else if(j==0)
				next[i++]=-1;
			else
				j=next[j-1]+1;
		}
		
		i=j=0;
		while(i<la){
			if(j==-1||a[i]==b[j]){
				i++;j++;
				if(j==lb){
					printf("yes\n");
					t=0;
					j=next[j-1]+1;
				}
			}
			else if(j==0)
				i++;
			else
				j=next[j-1]+1;
		}
		if(t)printf("no\n");
	}
	return 0;
}