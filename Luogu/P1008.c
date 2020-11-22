#include<stdio.h>
int main(){
	int a[10],i,j,b;
	for(i=192;i<329;i++){
		for(j=1;j<10;j++)a[j]=0;
		b=i;
		a[b/100]++;a[(b/10)%10]++;a[b%10]++;
		b+=i;
		a[b/100]++;a[(b%100)/10]++;a[b%10]++;
		b+=i;
		a[b/100]++;a[(b%100)/10]++;a[b%10]++;
		b=0;
		for(j=1;j<10;j++) if(a[j]-1)b=1;
		if(b==0)printf("%d %d %d\n",i,2*i,3*i);
	}
	return 0;
}