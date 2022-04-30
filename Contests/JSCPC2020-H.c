#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int i,j,k,c[100005]={},n,m;
		char t[30][7],s[100005];
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
			scanf("\n%*c%s",t[i]);
		scanf("%s",s);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				for(k=0;t[j][k]&&s[i+k];k++)
					if(t[j][k]!=s[i+k])
						break;
				if(!t[j][k]){
					if(i==0)
						c[i+k-1]++;
					else
						c[i+k-1]+=c[i-1];
					if(c[i+k-1]%128>1)
						c[i+k-1]%=128;
					else if(c[i+k-1]>128)
						c[i+k-1]=c[i+k-1]%128+128;
				}
			}
		}
		if(!c[n-1])
			printf("nonono\n");
		else if(c[n-1]==1)
			printf("happymorsecode\n");
		else
			printf("puppymousecat %d\n",c[n-1]%128);
	}
	return 0;
}