class Solution{
public:
	int isWinner(vector<int>& player1,vector<int>& player2){
		char t=0;
		int s=0;
		for(int a:player1){
			s+=a*(1+(t>0));
			if(a==10)t=2;
			else t--;
		}
        t=0;
		for(int a:player2){
			s-=a*(1+(t>0));
			if(a==10)t=2;
			else t--;
		}
		if(s>0)return 1;
		if(s<0)return 2;
		return 0;
	}
};