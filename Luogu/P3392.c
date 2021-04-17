#include<stdio.h>
int main(){
	int i,j,k,n,m,a[55][3]={},min=2500;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)for(j=0;j<m;j++){
		char c;
		while(scanf("%c",&c),(c!='W'&&c!='B'&&c!='R'));
		if(c=='W')a[i][0]++;
		if(c=='B')a[i][1]++;
		if(c=='R')a[i][2]++;
	}
	for(i=1;i<n-1;i++)for(j=i+1;j<n;j++){
		int cnt=n*m;
		for(k=0;k<i;k++)cnt-=a[k][0];
		for(;k<j;k++)	cnt-=a[k][1];
		for(;k<n;k++)	cnt-=a[k][2];
		if(cnt<min)min=cnt;
	}
	printf("%d",min);
	return 0;
}