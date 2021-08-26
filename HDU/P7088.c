#include<stdio.h>
long long a1[100002],a2[100002],b[100002],m;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i;
		scanf("%lld",&m);
		for(i=0;i<m;i++)
			scanf("%lld",a1+i);
		for(i=0;i<m;i++)
			scanf("%lld",a2+i);
		for(i=0;i<m;i++)
			scanf("%lld",b+i);
		long long sa1=0,sa2=0,sb=0,
			sa1b=0,sa2b=0,sbb=0,sa1a1=0,sa2a2=0;
		for(i=0;i<m;i++){
			sa1+=a1[i];
			sa2+=a2[i];
			sb+=b[i];
			sa1a1+=a1[i]*a1[i];
			sa2a2+=a2[i]*a2[i];
			sa1b+=a1[i]*b[i];
			sa2b+=a2[i]*b[i];
		}
		double sse1=0,sse2=0,pb=(sb*1.0)/m,
			pa1=(sa1*1.0)/m,pa2=(sa2*1.0)/m,
			k1=(sa1b-sa1*pb)/(sa1a1-sa1*pa1),
			k2=(sa2b-sa2*pb)/(sa2a2-sa2*pa2),
			b1=(sb-k1*sa1)/m,
			b2=(sb-k2*sa2)/m;
		for(i=0;i<m;i++){
			sse1+=(b[i]-k1*a1[i]-b1)*(b[i]-k1*a1[i]-b1);
			sse2+=(b[i]-k2*a2[i]-b2)*(b[i]-k2*a2[i]-b2);
		}
		if(sse1-sse2>1e-8)
			printf("2\n");
		else
			printf("1\n");
	}
	return 0;
}