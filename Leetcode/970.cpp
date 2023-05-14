class Solution{
public:
	vector<int> powerfulIntegers(int x,int y,int bound){
		int i,a[21]={1},t=2*(x==1)+(y==1);
		set<int> s;
		switch(t){
		case 3:
			if(bound>=2)
				s.insert(2);
			break;
		case 2:
			x=y;
		case 1:
			for(y=1;y<bound;y*=x)
				s.insert(y+1);
			break;
		case 0:
			for(i=0;a[i]<bound;i++)
				a[i+1]=a[i]*x;
			for(x=1;x<bound;x*=y)
				for(i=0;a[i]+x<=bound;i++)
					s.insert(a[i]+x);
		}
		return vector<int>(s.begin(),s.end());
	}
};