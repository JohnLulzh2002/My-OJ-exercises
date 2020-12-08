#include<stdio.h>
#include<string.h>
int main(){
	int t,i,j,exp[62],power2[25];
	int ans[25];
	char b[22];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<61;i++)
			exp[i]=0;
		for(i=0;i<24;i++)
			power2[i]=ans[i]=0;
		power2[0]=1;
		for(i=0;i<8;i++){
			int in;
			scanf("%d",&in);
			exp[in]++;
		}
		i=0;
		scanf("%s",b);
		int l=strlen(b);
		for(i=0;i<l;i++)
			ans[i]=b[l-1-i]-'0';
		for(i=0;i<61;i++){
			if(exp[i]){
				for(j=0;j<23;j++)
					ans[j]+=power2[j]*exp[i];
			}
			for(j=0;j<23;j++){
				power2[j]*=2;
			}
			for(j=0;j<23;j++)
				if(power2[j]>9){
					power2[j+1]+=power2[j]/10;
					power2[j]%=10;
				}
		}
		for(i=0;i<23;i++)
			if(ans[i]>9){
				ans[i+1]+=ans[i]/10;
				ans[i]%=10;
			}
		for(i=22;!ans[i];i--);
		for(;i+1;i--)
			printf("%d",ans[i]);
		printf("\n");
	}
	return 0;
}