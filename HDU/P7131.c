#include<stdio.h>
#include<string.h>
#define MAX 100002
#define MOD 998244353
int suffix[MAX];
long long p[10][MAX];
int main(){
	const char pre[]="nunhehheh";
	int t;
	scanf("%d",&t);
	while(t--){
		char s[MAX];
		scanf("%s",s);
		int i,j,l=strlen(s);

		for(i=0;i<l;i++)suffix[i]=0;
		long long aa=1;
		for(i=l-1;i>-1;i--){
			if(s[i]=='a'){
				aa*=2;
				aa%=MOD;
			}
			suffix[i]=aa-1;
		}

		for(i=0;i<9;i++)for(j=0;j<l;j++)
			p[i][j]=0;
		if(s[0]=='n')
			p[0][0]=1;
		for(j=1;j<l;j++)
			if(s[j]=='n')
				p[0][j]=p[0][j-1]+1;
			else
				p[0][j]=p[0][j-1];
		for(i=1;i<8;i++)
			for(j=1;j<l;j++){
				p[i][j]=p[i][j-1];
				if(s[j]==pre[i])
					p[i][j]+=p[i-1][j-1];
				p[i][j]%=MOD;
			}
		long long ans=0;
		for(i=6;i<l-1;i++)
			if(s[i]=='h'){
				ans+=p[7][i-1]*suffix[i+1];
				ans%=MOD;
			}
		printf("%lld\n",ans);
	}
	return 0;
}