#include<stdio.h>
int a2n(int* a){
	int i=0,s=0;
	for(;i<4;i++){
		s*=10;
		s+=a[i];
	}
	return s;
}
int n2aa[4];
void n2a(int s){
	int i=0;
	for(;i<4;i++){
		n2aa[3-i]=s%10;
		s/=10;
	}
}
int ans[10000]={1},l[10000],nl[10000];
const int add[20][4]={
	{ 0, 0, 0, 1},
	{ 0, 0, 1, 0},
	{ 0, 1, 0, 0},
	{ 1, 0, 0, 0},
	{ 0, 0, 1, 1},
	{ 0, 1, 1, 0},
	{ 1, 1, 0, 0},
	{ 0, 1, 1, 1},
	{ 1, 1, 1, 0},
	{ 1, 1, 1, 1},
	{ 0, 0, 0,-1},
	{ 0, 0,-1, 0},
	{ 0,-1, 0, 0},
	{-1, 0, 0, 0},
	{ 0, 0,-1,-1},
	{ 0,-1,-1, 0},
	{-1,-1, 0, 0},
	{ 0,-1,-1,-1},
	{-1,-1,-1, 0},
	{-1,-1,-1,-1}
};
int main(){
	int t,i,j,k,lc=1,nlc;
	while(lc){
		nlc=0;
		for(i=0;i<lc;i++){
			n2a(l[i]);
			for(j=0;j<20;j++){
				int a[4],n;
				for(k=0;k<4;k++){
					a[k]=n2aa[k]+add[j][k];
					if(a[k]<0)a[k]+=10;
					if(a[k]>9)a[k]-=10;
				}
				n=a2n(a);
				if(!ans[n]){
					ans[n]=ans[l[i]]+1;
					nl[nlc++]=n;
				}
			}
		}
		for(j=0;j<nlc;j++)
			l[j]=nl[j];
		lc=nlc;
	}
	scanf("%d",&t);
	while(t--){
		char a[5],b[5];
		int d,i,s=0;
		scanf("%s%s",a,b);
		for(i=0;i<4;i++){
			d=b[i]-a[i];
			if(d<0)d+=10;
			s=s*10+d;
		}
		printf("%d\n",ans[s]-1);
	}
	return 0;
}