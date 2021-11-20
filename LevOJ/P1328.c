#include<stdio.h>
void swap(int*a,int*b){
	*a+=*b;
	*b=*a-*b;
	*a-=*b;
}
int main(){
	int i,n,a,s,m1,m2,m3;
	scanf("%d",&n);
	while(n--){
		s=0;
		for(i=0;i<3;i++){
			scanf("%d",&a);
			s+=a;
		}
		m1=m2=m3=0;
		while(scanf("%d",&a),a+1){
			if(a>m1)swap(&a,&m1);
			if(a>m2)swap(&a,&m2);
			if(a>m3)swap(&a,&m3);
		}
		printf("%d\n",s+m1+m2+m3);
	}
	return 0;
}