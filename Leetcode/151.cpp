#include<iostream>
#include<string>
#include<cctype>
using namespace std;
class Solution{
private:
	void reverse(string& s,int l,int r){
		for(int i=0;l+i*2<r;i++){
			char c=s[l+i];
			s[l+i]=s[r-1-i];
			s[r-1-i]=c;
		}
	}
public:
	string reverseWords(string s){
		int len=s.length(),l=0,r,wordLen=0;
		reverse(s,0,len);
		for(int i=0;i<len;i++){
			if(isalnum(s[i])){
				r=i+1;
				wordLen++;
			}
			else if(wordLen>0){
				reverse(s,l,r);
				l+=wordLen;
				s[l++]=' ';
				wordLen=0;
			}
		}
		if(wordLen>0){
			reverse(s,l,r);
			l+=wordLen+1;
		}
		s.resize(l-1);
		return s;
	}
};
int main(){
	Solution s;
	cout<<s.reverseWords("the sky is blue")<<endl;
	cout<<s.reverseWords("  hello world  ")<<endl;
}