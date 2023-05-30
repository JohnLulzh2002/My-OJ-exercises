#include<stdio.h>
#include<stack>
using namespace std;
const int dx[]{0,1,0,-1},dy[]{1,0,-1,0};
char m[9][9];
stack<pair<int,int>> v;
bool dfs(int x,int y){
	if(x<0||x>7||y<0||y>7||m[x][y]!='O')
		return false;
	m[x][y]=' ';
	v.push({x,y});
	if(x==7&&y==7){
		for(int i=0;i<8;i++)
			puts(m[i]);
		return true;
	}
	for(int i=0;i<4;i++)
		if(dfs(x+dx[i],y+dy[i]))
			return true;
	m[x][y]='O';
	return false;
}
int main(){
	for(int i=0;i<8;i++)
		scanf("%s",m[i]);
	dfs(0,0);
	return 0;
}