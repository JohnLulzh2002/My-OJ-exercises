#include<stdio.h>
int f[2002];
int fa(int n){
	if(n==f[n])
		return n;
	return f[n]=fa(f[n]);
}
int main(){
	int n,m1,m2,i,j,ans[2][1001],c=0;
	for(n=1;n<2001;n++)f[n]=n;
	scanf("%d%d%d",&n,&m1,&m2);
	while(m1--){
		scanf("%d%d",&i,&j);
		f[fa(i)]=fa(j);
	}
	while(m2--){
		scanf("%d%d",&i,&j);
		f[fa(i+n)]=fa(j+n);
	}
	for(i=2*n;i;i--)f[i]=fa(i);
	for(i=1;i<=n;i++)for(j=1;j<=n;j++){
		if(fa(i)!=fa(j)&&fa(i+n)!=fa(j+n)){
			f[fa(i)]=fa(j);
			f[fa(i+n)]=fa(j+n);
			ans[0][c]=i;
			ans[1][c++]=j;
		}
	}
	printf("%d\n",c);
	for(i=0;i<c;i++)
		printf("%d %d\n",ans[0][i],ans[1][i]);
	return 0;
}