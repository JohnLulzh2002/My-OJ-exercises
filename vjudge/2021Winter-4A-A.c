#include<stdio.h>
#include<string.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int f[1000][1000];
char a[1000],b[1000];
int main(){
	while(~scanf("%s%s",a+1,b+1)){
		const int la=strlen(a+1),lb=strlen(b+1);
		int i,j;
		for(i=0;i<=MAX(la,lb);i++)
			f[i][0]=f[0][i]=0;
		for(i=1;i<=la;i++)
			for(j=1;j<=lb;j++){
				if(a[i]==b[j])
					f[i][j]=f[i-1][j-1]+1;
				else
					f[i][j]=MAX(f[i-1][j],f[i][j-1]);
			}
		printf("%d\n",f[la][lb]);
	}
	return 0;
}