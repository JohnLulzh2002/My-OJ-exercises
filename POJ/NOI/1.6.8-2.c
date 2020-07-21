#include<stdio.h>
int main(){
	int n,na,nb,a[101],b[101],wa=0,wb=0,i,p,q;
	scanf("%d %d %d",&n,&na,&nb);
	for(i=0;i<na;i++)scanf("%d",&a[i]);
	for(i=0;i<nb;i++)scanf("%d",&b[i]);
	for(i=0;i<n;i++){
		p=a[i % na];
		q=b[i % nb];
		if(p==0){
			if(q==2)wa++;
			if(q==5)wb++;
		}
		if(p==2){
			if(q==5)wa++;
			if(q==0)wb++;
		}
		if(p==5){
			if(q==0)wa++;
			if(q==2)wb++;
		}
	}
	if(wa>wb)printf("A");
	if(wa==wb)printf("draw");
	if(wa<wb)printf("B");
	return 0;
}