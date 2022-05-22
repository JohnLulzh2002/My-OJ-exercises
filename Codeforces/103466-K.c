#include<stdio.h>
#define eps (1e-9)
int px,py;
void get_point(int x1,int y1,int x2,int y2,int x3,int y3){
	double d;
	if(y2==y1)
		d=(double)(px-x1)/(x2-x1);
	else
		d=(double)(py-y1)/(y2-y1);
	if(d<-eps)
		printf("-1\n");
	else if(d<eps)
		printf("%lf %lf\n",(x2+x3)/2.0,(y2+y3)/2.0);
	else if(d<0.5){
		double e=0.5/(1-d);
		printf("%lf %lf\n",x2+(x3-x2)*e,y2+(y3-y2)*e);
	}else if(d<1-eps){
		double e=0.5/d;
		printf("%lf %lf\n",x1+(x3-x1)*e,y1+(y3-y1)*e);
	}else if(d<1+eps)
		printf("%lf %lf\n",(x1+x3)/2.0,(y1+y3)/2.0);
	else
		printf("-1\n");
}
int eq(double a,double b){
	return a+eps>b&&a-eps<b;
}
int main(){
	int x1,y1,x2,y2,x3,y3,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&px,&py);
		if(x1>x2){
			x1+=x2;x2=x1-x2;x1-=x2;
			y1+=y2;y2=y1-y2;y1-=y2;
		}
		if(x1>x3){
			x1+=x3;x3=x1-x3;x1-=x3;
			y1+=y3;y3=y1-y3;y1-=y3;
		}
		if(x2>x3){
			x2+=x3;x3=x2-x3;x2-=x3;
			y2+=y3;y3=y2-y3;y2-=y3;
		}
		if(x2==x3){
			x1+=x3;x3=x1-x3;x1-=x3;
			y1+=y3;y3=y1-y3;y1-=y3;
		}
		if(x1==x2){
			if(y1>y2){
				y1+=y2;y2=y1-y2;y1-=y2;
			}
			if(px==x1){
				if(py>=y1&&py<=y2)
					get_point(x1,y1,x2,y2,x3,y3);
				else
					printf("-1\n");
			}else{
				double k1=(double)(y3-y1)/(x3-x1);
				double k2=(double)(y3-y2)/(x3-x2);
				if(eq(k1,((double)(py-y1)/(px-x1))))
					get_point(x1,y1,x3,y3,x2,y2);
				else if(eq(k2,((double)(py-y2)/(px-x2))))
					get_point(x2,y2,x3,y3,x1,y1);
				else
					printf("-1\n");
			}
		}else{
			double k13=(double)(y3-y1)/(x3-x1),
				k23=(double)(y3-y2)/(x3-x2),
				k12=(double)(y2-y1)/(x2-x1);
			if(px==x1){
				if(py==y1)
					printf("%lf %lf\n",(x2+x3)/2.0,(y2+y3)/2.0);
				else if(eq(k23,((double)(py-y2)/(px-x2))))
					get_point(x2,y2,x3,y3,x1,y1);
				else printf("-1\n");
				continue;
			}
			if(px==x2){
				if(py==y2)
					printf("%lf %lf\n",(x1+x3)/2.0,(y1+y3)/2.0);
				else if(eq(k13,((double)(py-y1)/(px-x1))))
					get_point(x1,y1,x3,y3,x2,y2);
				else printf("-1\n");
				continue;
			}
			if(px==x3){
				if(py==y3)
					printf("%lf %lf\n",(x2+x1)/2.0,(y2+y1)/2.0);
				else if(eq(k12,((double)(py-y1)/(px-x1))))
					get_point(x1,y1,x2,y2,x3,y3);
				else printf("-1\n");
				continue;
			}
			if(eq(k13,((double)(py-y1)/(px-x1))))
				get_point(x1,y1,x3,y3,x2,y2);
			else if(eq(k23,((double)(py-y2)/(px-x2))))
				get_point(x2,y2,x3,y3,x1,y1);
			else if(eq(k12,((double)(py-y1)/(px-x1))))
				get_point(x1,y1,x2,y2,x3,y3);
			else
				printf("-1\n");
		}
	}
	return 0;
}