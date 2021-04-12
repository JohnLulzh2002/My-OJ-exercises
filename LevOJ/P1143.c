#include<stdio.h>
int max,n;
char s[101][102];
int fine(char* x,int l){
	int i=1,j,k,t;
	for(;i<n;i++){
		t=0;
		for(j=0;s[i][j+l-1];j++){
			t++;
			for(k=0;k<l;k++)
				if(s[i][j+k]-x[k]){
					t--;break;
				}
		}
		if(!t)return 0;
	}
	return 1;
}
int rfine(char* x,int l){
	int i=1,j,k,t;
	for(;i<n;i++){
		t=0;
		for(j=0;s[i][j+l-1];j++){
			t++;
			for(k=0;k<l;k++)
				if(s[i][j+k]-x[l-k-1]){
					t--;break;
				}
		}
		if(!t)return 0;
	}
	return 1;
}
int main(){
	int a,i,j,t;
	while(~scanf("%d",&a))
	while(a--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%s",s[i]);
		for(max=0;s[0][max];max++);
		t=0;
		for(max--;max;max--){
			for(i=0;s[0][i+max-1];i++)
				if(fine(&s[0][i],max)||rfine(&s[0][i],max)){
					printf("%d\n",max);
					t=1;
					break;
				}
			if(t)break;
		}
	}
	return 0;
}