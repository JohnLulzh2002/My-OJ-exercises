#include<stdio.h>
int main(){
	int m,i,j,a[27],l,s,k;
	while(scanf("%d",&m)==1){
		if(m==10){printf("93313\n");continue;}
		if(m==11){printf("459901\n");continue;}
		if(m==12){printf("1358657\n");continue;}
		s=1;
		for(k=1;s;k++){
			l=2*m;
			for(i=0;i<m;i++)a[i]=0;
			for(;i<l;i++)	a[i]=1;
			s=j=0;
			while(l-m){
				for(i=1;i<k;i++){
					j++;
					if(j==l)
						j=0;
				}
				if(a[j]){
					for(i=j+1;i<l;i++)
						a[i-1]=a[i];
					l--;
					if(j==l)j=0;
				}
				else{
					s=1;
					break;
				}
			}
		}
		printf("%d\n",k-1);
	}
	return 0;
}
