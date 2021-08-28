#include<iostream>
#include<string>
using namespace std;
const string branchName[6]={"dragon",
	"ninja","iceman","lion","wolf"};
class Warrior{
private:
	static int branchExist[2][6];
public:
	string side;
	int hp,num,branch;
	Warrior(string _side,int _hp,int _num,int _branch)
		:side(_side),hp(_hp),num(_num),branch(_branch){
		cout<<side<<' '<<branchName[branch]<<' '<<num;
		cout<<" born with strength "<<hp<<',';
		branchExist[side=="red"][branch]++;
		cout<<branchExist[side=="red"][branch]<<' '<<branchName[branch];
		cout<<" in "<<side<<" headquarter"<<endl;
	}
	static void clear(){
		for(int i=0;i<5;i++){
			branchExist[0][i]=0;
			branchExist[1][i]=0;
		}
	}
};
int Warrior::branchExist[2][6]={};
const int spawn1[]={2,3,4,1,0},
	spawn2[]={3,0,1,2,4};
int main(){
	// cout<<"Red:"<<endl;
	// for(int i:spawn1){
	// 	cout<<branchName[i]<<endl;
	// }
	// cout<<"Blue:"<<endl;
	// for(int i:spawn2){
	// 	cout<<branchName[i]<<endl;
	// }
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		cout<<"Case:"<<i<<endl;
		int m;
		cin>>m;
		int branchHp[6];
		cin>>branchHp[0]>>branchHp[1]>>branchHp[2]
			>>branchHp[3]>>branchHp[4];
		int m1=m,m2=m,p1=0,p2=0,t=0,used1=0,used2=0;
		bool can1=true,can2=true;
		while(can1||can2){
			if(can1){
				if(t<100)cout<<0;
				if(t<10)cout<<0;
				cout<<t<<' ';
				int j,tmp;
				for(j=0;j<5;j++)
					if(m1>=branchHp[tmp=spawn1[(p1+j)%5]]){
						Warrior("red",branchHp[tmp],++used1,tmp);
						m1-=branchHp[tmp];
						p1=(p1+j+1)%5;
						break;
					}
				if(j==5){
					cout<<"red headquarter stops making warriors"<<endl;
					can1=false;
				}
			}
			if(can2){
				if(t<100)cout<<0;
				if(t<10)cout<<0;
				cout<<t<<' ';
				int j,tmp;
				for(j=0;j<5;j++)
					if(m2>=branchHp[tmp=spawn2[(p2+j)%5]]){
						m2-=branchHp[tmp];
						Warrior("blue",branchHp[tmp],++used2,tmp);
						p2=(p2+j+1)%5;
						break;
					}
				if(j==5){
					cout<<"blue headquarter stops making warriors"<<endl;
					can2=false;
				}
			}
			t++;
		}
		Warrior::clear();
	}
	return 0;
}