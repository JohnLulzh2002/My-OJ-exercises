#include<stdio.h>
const int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n;
	scanf("%d",&n);
	int y=1998,m=1,d=1,week=4,max;
	while(y<n){
		d++;week++;
		if(week==8)week=1;
		max=month[m];
		if(y%4==0 && (y%100||y%400==0) && m==2)max=29;
		if(d>max){
			d=1;
			m++;
			if(m==13){
				m=1;
				y++;
			}
		}
	}
	int c=0;
	while(m<13){
		d++;week++;
		if(week==8)week=1;
		if(week==5&&d==13)c++;
		max=month[m];
		if(y%4==0 && y%100 && m==2)max=29;
		if(d>max){
			d=1;
			m++;
		}
	}
	printf("%d",c);
	return 0;
}