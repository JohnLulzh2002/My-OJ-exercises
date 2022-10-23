#include<stdio.h>
#define MAXN 100005
int a[MAXN],nxt[MAXN],jump[MAXN],st[MAXN];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,q,i,j,top=0;
		scanf("%d%d",&n,&q);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		a[n]=1e9+1;
		for(int i=0; i<=n; i++){
			if(top==0||a[st[top-1]]>a[i])
				st[top++]=i;
			else{
				while(top>0&&a[st[top-1]]<=a[i])
					nxt[st[--top]]=i-1;
				st[top++]=i;
			}
		}
		for(i=0;i<n-1;i++){
			if(a[i]<a[i+1]){
				for(j=i+1;j<n-1&&a[j]<a[j+1];j++);
				for(;i<=j;i++)
					jump[i]=j;
				i--;
			}
			else
				jump[i]=i+1;
		}
		while(q--){
			int l,r,ans=0;
			scanf("%d%d",&l,&r);
			l--;r--;
			while(l<r){
				if(nxt[l]>l){
					ans++;
					l=nxt[l]+1;
				}else
					l=jump[l];
				// printf("*%d\n",l);
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}