#include<cstdio>
#include<complex>
using namespace std;
typedef complex<double> cd;
cd inv[3][3];
cd cal_inv(cd m[3][3]){
	int i,j;
	cd det(0,0);
	for(i=0;i<3;i++)
		det+=(m[0][i]*(m[1][(i+1)%3]*m[2][(i+2)%3]-
			m[1][(i+2)%3]*m[2][(i+1)%3]));
	for(i=0;i<3;i++) for(j=0;j<3;j++)
		inv[i][j]=((m[(j+1)%3][(i+1)%3]*m[(j+2)%3][(i+2)%3])-
			(m[(j+1)%3][(i+2)%3]*m[(j+2)%3][(i+1)%3]))/det;
	return det;
}
double cabs(cd a){
	double i=a.imag(),r=a.real();
	return sqrt(i*i+r*r);
}
cd mult[3];
void cal_mult(cd m[3][3],cd x[3]){
	int i,j;
	for(i=0;i<3;i++){
		cd s(0,0);
		for(j=0;j<3;j++)
			s+=m[i][j]*x[j];
		mult[i]=s;
	}
}
int main(){
	int i,j,t;
	double p[4],q[4],r[4],s[4];
	scanf("%d",&t);
	while(t--){
		// cin>>p[1]>>q[1]>>r[1]>>s[1];
		// cin>>p[2]>>q[2]>>r[2]>>s[2];
		// cin>>p[3]>>q[3]>>r[3]>>s[3];
		// cin>>p[0]>>q[0];
		scanf("%lf%lf%lf%lf",&p[1],&q[1],&r[1],&s[1]);
		scanf("%lf%lf%lf%lf",&p[2],&q[2],&r[2],&s[2]);
		scanf("%lf%lf%lf%lf",&p[3],&q[3],&r[3],&s[3]);
		scanf("%lf%lf",&p[0],&q[0]);
		cd z[4],w[4],a,b,c,d,m[3][3];
		for(i=0;i<4;i++){
			z[i]=cd(p[i],q[i]);
			w[i]=cd(r[i],s[i]);
		}
		//(az+b)/(cz+1)
		for(i=0;i<3;i++){
			m[i][0]=z[i+1];
			m[i][1]=1;
			m[i][2]=-z[i+1]*w[i+1];
		}
		if(cabs(cal_inv(m))>0.00001){
			cd y[3];
			for(i=0;i<3;i++)
				y[i]=w[i+1];
			cal_mult(inv,y);
			a=mult[0];
			b=mult[1];
			c=mult[2];
			w[0]=(a*z[0]+b)/(c*z[0]+cd(1,0));
			printf("%.8lf %.8lf\n",w[0].real(),w[0].imag());
			continue;
			// cout<<"(az+b)/(cz+1)"<<"\ta="<<a<<"\tb="<<b<<"\tc="<<c<<'\t'<<w[0]<<endl;
		}
		//(az+b)/(z+d)
		for(i=0;i<3;i++){
			m[i][0]=z[i+1];
			m[i][1]=1;
			m[i][2]=-w[i+1];
		}
		if(cabs(cal_inv(m))>0.00001){
			cd y[3];
			for(i=0;i<3;i++)
				y[i]=z[i+1]*w[i+1];
			cal_mult(inv,y);
			a=mult[0];
			b=mult[1];
			d=mult[2];
			w[0]=(a*z[0]+b)/(z[0]+d);
			printf("%.8lf %.8lf\n",w[0].real(),w[0].imag());
			continue;
			// cout<<"(az+b)/(z+d)"<<"\ta="<<a<<"\tb="<<b<<"\td="<<d<<'\t'<<w[0]<<endl;
		}
		//(az+1)/(cz+d)
		for(i=0;i<3;i++){
			m[i][0]=z[i+1];
			m[i][1]=-z[i+1]*w[i+1];
			m[i][2]=-w[i+1];
		}
		if(cabs(cal_inv(m))>0.00001){
			cd y[3];
			for(i=0;i<3;i++)
				y[i]=-1;
			cal_mult(inv,y);
			a=mult[0];
			c=mult[1];
			d=mult[2];
			w[0]=(a*z[0]+cd(1,0))/(c*z[0]+d);
			printf("%.8lf %.8lf\n",w[0].real(),w[0].imag());
			continue;
			// cout<<"(az+1)/(cz+d)"<<"\ta="<<a<<"\tc="<<c<<"\td="<<d<<'\t'<<w[0]<<endl;
		}
		//(z+b)/(cz+d)
		for(i=0;i<3;i++){
			m[i][0]=1;
			m[i][1]=-z[i+1]*w[i+1];
			m[i][2]=-w[i+1];
		}
		if(cabs(cal_inv(m))>0.00001){
			cd y[3];
			for(i=0;i<3;i++)
				y[i]=-z[i+1];
			cal_mult(inv,y);
			b=mult[0];
			c=mult[1];
			d=mult[2];
			w[0]=(z[0]+b)/(c*z[0]+d);
			printf("%.8lf %.8lf\n",w[0].real(),w[0].imag());
			continue;
			// cout<<"(z+b)/(cz+d)"<<"\tb="<<b<<"\tc="<<c<<"\td="<<d<<'\t'<<w[0]<<endl;
		}
	}
	return 0;
}