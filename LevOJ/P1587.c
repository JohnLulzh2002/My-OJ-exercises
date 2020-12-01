#include<stdio.h>
#include<math.h>
int main(){
	double k;
	int t,r,h,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&r,&h);
		ans=2*(h/r);
		h%=r;
		k=(double)h/r+1e-7;
		if(k<=0.5)ans+=1;
		else if(k<0.7320508075)ans+=2;
		else ans+=3;
		printf("%d\n",ans); 
	}
	return 0;
}
