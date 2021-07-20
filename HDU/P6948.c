#include<stdio.h>
#define Max(a,b) ((a)>(b)?(a):(b))
int main(){
	int k;
	while(~scanf("%d",&k)){
		char s[444444];
		int count[27]={},l=0,r,max=0;
		scanf("%s",s);
		for(r=0;s[r];r++){
			count[s[r]-'a']++;
			if(count[s[r]-'a']<=k)
				max=Max(max,r-l+1);
			while(count[s[r]-'a']>k)
				count[s[l++]-'a']--;
		}
		printf("%d\n",max);
	}
	return 0;
}