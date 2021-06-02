#include<stdio.h>
int main(){
	int n,m,c,w,bag[111118],i;
	for(i=1;i<111118;i++)
		bag[i]=-1;
	bag[0]=0;
	scanf("%d%d",&n,&m);
	while(n--){
		scanf("%d%d",&c,&w);
		for(i=111111-w;i>-1;i--)
			if(bag[i]+1&&bag[i]+c<=m&&(bag[i+w]==-1||bag[i+w]>bag[i]+c))
				bag[i+w]=bag[i]+c;
	}
	for(i=111110;!(bag[i]+1);i--);
	printf("%d",i);
	return 0;
}