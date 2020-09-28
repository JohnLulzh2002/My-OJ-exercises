#include<stdio.h>
#include<string.h>
int main(){
	char a[102],b[102],m[27],yw[27];
	memset(m,0,sizeof(m));
	memset(yw,0,sizeof(yw));
	//m-map
	int i=0,o,t,s=0;
	//o-original t-transfered
	//freopen("11.in","r",stdin);
	//freopen("11.out","w",stdout);
	scanf("%s",a);
	scanf("%s",b);
	for(;a[i];i++){
		o=a[i]-'A';	//A->0
		t=b[i]-'A';	//A->0
		if(m[o]==0){
			m[o]=t+1;
			yw[t]++;
			s++;
		}
		else if(m[o]-t-1){
			printf("Failed");
			return 0;
		}
	}
	for(i=0;i<26;i++)if(yw[i]-1){
		printf("Failed");
		return 0;
	}
	scanf("%s",a);
	for(i=0;a[i];i++)
		printf("%c",m[a[i]-'A']+'A'-1);
	return 0;
} 
