#include<stdio.h>
#include<string.h>
char s[100005];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char f[105];
		scanf("%s",s);
		scanf("%s",f);
		int l[2][105],i,j,
			ls=strlen(s),lf=strlen(f),
			ansl=0,ansr=0,minl=1e6;
		for(i=0;i<lf;i++)
			if(s[0]==f[i]&&i==0)
				l[0][i]=0;
			else
				l[0][i]=-1;
		for(i=1;i<ls;i++){
			if(s[i]==f[0])
				l[1][0]=i;
			else
				l[1][0]=l[0][0];
			for(j=1;j<lf;j++){
				if(s[i]==f[j])
					l[1][j]=l[0][j-1];
				else
					l[1][j]=l[0][j];
			}
			for(j=0;j<lf;j++){
				l[0][j]=l[1][j];
				// printf("%d ",l[0][j]);
			}
			// printf("\t%d\n",i);
			if(l[0][lf-1]>=0&&
				i-l[0][lf-1]<minl){
				ansl=l[0][lf-1];
				ansr=i;
				minl=i-l[0][lf-1];
			}
		}
		for(i=ansl;i<=ansr;i++)
			printf("%c",s[i]);
		putchar('\n');
		// printf("%d\t%d\n",ansl,ansr);
	}
	return 0;
}