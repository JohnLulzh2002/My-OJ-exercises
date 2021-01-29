#include<stdio.h>
#include<string.h>
int main(){
	int n;
	while(scanf("%d",&n),n){
		int count[100],m=0,i,max=0,maxi;
		char color[100][18],in[18];
		while(n--){
			scanf("%s",in);
			int t=1;
			for(i=0;i<m;i++)
				if(!strcmp(in,color[i])){
					t=0;
					count[i]++;
					break;
				}
			if(t){
				strcpy(color[m],in);
				count[m++]=0;
			}
		}
		for(i=0;i<m;i++)
			if(count[i]>max){
				maxi=i;
				max=count[i];
			}
		printf("%s\n",color[maxi]);
	}
	return 0;
}