#include<stdio.h>
#include<string.h>
//高精度除法,la位s进制高精度数a,除以整型数b,结果保存到lc位高精度数c,返回余数
int div(int a[],int la,int s,int b,int c[],int*lc){
	int i,t=0;
	for(i=la-1;i>-1;i--){
		t*=s;
		t+=a[i];
		c[i]=t/b;
		t%=b;
	}
	while(la && c[la-1]<1)la--;
	*lc=la;
	return t;
}
void minusOne(int a[],int*la,int s){
	int i;
	a[0]--;
	for(i=0;i<(*la) && a[i]<0;i++){
		a[i]=s-1;
		a[i+1]--;
	}
	if(i==*la||!a[(*la)-1])	(*la)--;
}
int main(){
	int i,j,len,lc,ln;
	int num[40],chr[40],ans[40],a[40],la;
	char in[40];
	while(scanf("%s",in),in[0]!='*'){
		la=len=strlen(in);
		j=0;
		if(in[0]<60){	//is number
			ln=len;
			for(i=0;i<len;i++)
				a[i]=num[i]=in[len-1-i]-'0';
			while(la>0){
				chr[j]=div(a,la,10,26,a,&la);
				if(!chr[j]){
					chr[j]=26;
					minusOne(a,&la,10);
					if(la<0)la=0;
				}
				j++;
			}
			lc=j;
		}
		else{		//is character
			lc=len;
			for(i=0;i<len;i++)
				a[i]=chr[i]=in[len-1-i]-'a'+1;
			while(la){
				num[j++]=div(a,la,26,10,ans,&la);
				for(i=0;i<la;i++)	a[i]=ans[i];
			}
			ln=j;
		}

		for(i=0;i<lc;i++)
			printf("%c",chr[lc-1-i]+'a'-1);
		for(;lc<22;lc++)printf(" ");
		for(i=0;i<ln;i++){
			printf("%c",num[ln-1-i]+'0');
			if((ln-i-1)%3==0 && i<ln-1)printf(",");
		}
		printf("\n");
	}
	return 0;
}