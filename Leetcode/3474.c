#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* generateString(char* str1,char* str2){
	int n=strlen(str1),m=strlen(str2);
	char* s=calloc(n+m,sizeof(char));
	for(int i=0;i<n;i++) if(str1[i]=='T'){
		for(int j=0;j<m;j++){
			if(s[i+j]==0)
				s[i+j]=str2[j];
			else if(s[i+j]!=str2[j])
				return "";
		}
	}
	for(int i=0;i<n+m-1;i++)if(s[i]==0)
		s[i]='A';
	for(int i=0;i<n;i++) if(str1[i]=='F'){
		int r=-1;
		for(int j=0;j<m;j++){
			if(s[i+j]!=str2[j] && !(s[i+j]=='A'&&str2[j]=='a'))
				r=-2;
			else if(s[i+j]=='A'&&r!=-2)
				r=j;
		}
		if(r==-1)
			return "";
		if(r!=-2)
			s[i+r]='b';
	}
	for(int i=0;i<n+m-1;i++)if(s[i]=='A')
		s[i]='a';
	return s;
}
int main(){
	printf("%s\n",generateString("TFTF","ab"));
	printf("%s\n",generateString("TFTF","abc"));
	printf("%s\n",generateString("F","d"));
	printf("%s\n",generateString("TFFFTFFF","bab"));
	printf("%s\n",generateString("TTFFT","fff"));
	return 0;
}