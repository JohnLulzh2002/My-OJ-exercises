#include<stdio.h>
int main(){
	int n,k,sign=0,i,max,
		seen[100001]={},a[100001];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		max=0;
		for(i=0;i<k;i++){
			scanf("%d",a+i);
			if(seen[a[i]]>max)max=seen[a[i]];
		}
		if(max==sign)sign++;
		for(i=0;i<k;i++)
			seen[a[i]]=max+1;
	}
	printf("%d",sign);
	return 0;
}