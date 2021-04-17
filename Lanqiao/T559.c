#include<stdio.h>
int det(int n,int m[8][8]){
	if(n==1)
		return m[0][0];
	int i,j,k,ak,sign=1,ans=0;
	for(i=0;i<n;i++){
		int a[8][8];
		for(j=1;j<n;j++){
			for(ak=k=0;k<n;k++){
				if(k==i)continue;
				a[j-1][ak]=m[j][k];
				ak++;
			}
		}
		ans+=sign*det(n-1,a)*m[0][i];
		sign*=-1;
	}
	return ans;
}
int main(){
	int n,a[8][8],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	printf("%d",det(n,a));
	return 0;
}