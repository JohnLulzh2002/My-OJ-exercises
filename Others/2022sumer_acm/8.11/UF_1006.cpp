#include<stdio.h>
#include<algorithm>
using namespace std;
typedef unsigned int uint;
typedef pair<int,int> pii;
uint x,y,z,w;
inline uint Xor128(void){
	uint t;
	t=x^(x<<11);
	x=y; y=z; z=w;
	return w=w^(w>>19)^(t^(t>>8));

}
inline int GetDice(){
	return Xor128()%6+1;
}
struct Piece{
	int pos,col,num;
	pii check(int n);
	int go(int n){
		pii ans=check(n);
		pos=ans.first;
		return ans.second;
	}
};
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		uint a;
		printf("%d",t);
	}
	return 0;
}