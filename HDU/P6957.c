#include<stdio.h>
#define Max(a,b) (((a)>(b))?(a):(b))
#define MAX 2222
int a[MAX][MAX],b[MAX][MAX];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,i,j;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<m;i++){
			b[0][i]=1;
			for(j=1;j<n;j++){
				b[j][i]=1;
				if(a[j][i]>=a[j-1][i])
					b[j][i]+=b[j-1][i];
			}
		}
		int ans=1;
		for(i=0;i<n;i++){
			int l[MAX],r[MAX];
			l[0]=-1;
			for(j=1;j<m;j++){
				l[j]=j-1;
				while(l[j]+1&&b[i][j]<=b[i][l[j]])
					l[j]=l[l[j]];
			}
			r[m-1]=m;
			for(j=m-2;j+1;j--){
				r[j]=j+1;
				while(r[j]<m&&b[i][j]<=b[i][r[j]])
					r[j]=r[r[j]];
			}
			for(j=0;j<m;j++)
				ans=Max(ans,b[i][j]*(r[j]-l[j]-1));
		}
		printf("%d\n",ans);
	}
	return 0;
}