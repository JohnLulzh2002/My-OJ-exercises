#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	map<string,char> m;
	m["q"]=m["iu"]='q';
	m["w"]=m["ei"]='w';
	m["e"]='e';
	m["r"]=m["uan"]='r';
	m["t"]=m["ue"]='t';
	m["y"]=m["un"]='y';
	m["u"]=m["sh"]='u';
	m["i"]=m["ch"]='i';
	m["o"]=m["uo"]='o';
	m["p"]=m["ie"]='p';
	m["a"]='a';
	m["s"]=m["ong"]=m["iong"]='s';
	m["d"]=m["ai"]='d';
	m["f"]=m["en"]='f';
	m["g"]=m["eng"]='g';
	m["h"]=m["ang"]='h';
	m["j"]=m["an"]='j';
	m["k"]=m["uai"]=m["ing"]='k';
	m["l"]=m["uang"]=m["iang"]='l';
	m["z"]=m["ou"]='z';
	m["x"]=m["ia"]=m["ua"]='x';
	m["c"]=m["ao"]='c';
	m["v"]=m["zh"]=m["ui"]='v';
	m["b"]=m["in"]='b';
	m["n"]=m["iao"]='n';
	m["m"]=m["ian"]='m';
	string s;
	while(getline(cin,s)){
		int p,last=-1;
		while((p=s.find(' ',last+1))<1111111){
			string a=s.substr(last+1,p-last-1);
			switch(a.length()){
			case 1:
				s.insert(last+1,a);
				break;
			case 2:
				break;
			default:
				s.erase(last+1,a.length());
				if(m.find(a)!=m.end()){
					s.insert(last+1,1,a[0]);
					s.insert(last+2,1,m[a]);
					break;
				}
				int i=a.length()-1;
				while(m.find(a.substr(0,i))==m.end())
					i--;
				s.insert(last+1,1,m[a.substr(0,i)]);
				s.insert(last+2,1,m[a.substr(i)]);
			}
			last+=3;
			if(last>=s.length())
				break;
		}
		cout<<s<<endl;
	}
	return 0;
}