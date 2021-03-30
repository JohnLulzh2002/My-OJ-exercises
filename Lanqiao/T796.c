#include<stdio.h>
void output(int y,int m,int d){
	printf("%d",y);
	if(m<10)
		printf("0");
	printf("%d",m);
	if(d<10)
		printf("0");
	printf("%d\n",d);
}
int main(){
	int y,m,d,in,max,stat=0;
	const int daysInMonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&in);
	y=in/10000;
	in%=10000;
	m=in/100;
	d=in%100;
	do{
		d++;
		max=daysInMonth[m];
		if(m==2 && y%4==0&&(y%100!=0||y%400==0))
			max=29;
		if(d>max){
			d=1;
			m++;
			if(m>12){
				m=1;
				y++;
			}
		}
		if(y/1000==d%10 && y%1000/100==d/10 && y%100/10==m%10 && y%10==m/10){
			if(!stat){
				output(y,m,d);
				stat=1;
			}
			if(m%10==d%10 && m/10==d/10){
				output(y,m,d);
				stat=2;
			}
		}
	}while(stat<2);
	return 0;
}