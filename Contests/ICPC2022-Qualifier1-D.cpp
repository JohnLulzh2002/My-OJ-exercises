#include<bits/stdc++.h>
using namespace std;
const int N=50;
#define Endl '\n'
int cnt[N],pre[N],ans[N],ANS;
int find_min(int x){

	int LEN=__lg(x);
	// cout<<x<<" "<<LEN<<Endl;
	for(int i=0;i<=LEN;i++){
		cnt[i]=0;
		ans[i]=0;
	}
	for(int i=0;i<=LEN;i++){
		if(x&(1<<i)){
			cnt[i]=1;
		}
		else{
			cnt[i]=0;
		}
		ans[i]=cnt[i];
		// cout<<cnt[i];
	}
	// cout<<Endl;
	pre[LEN]=1;
	for(int i=LEN-1;i>=0;i--){
		pre[i]=pre[i+1]+cnt[i];
	}
	for(int i=0;i<=LEN;i++){
		ANS=0;
		if(!cnt[i]){
			// cout<<i<<" "<<pre[i]<<Endl;
			if(i==pre[i]+1){
				ans[i]=1;
				// cout<<"#1 "<<i<<Endl;
				for(int j=i;j<=LEN;j++){
					if(ans[j]){
						ANS|=(1<<j);
					}
				}
				break;
			}
			if(i-1>=pre[i]+2){
				ans[i]=1;
				// cout<<"#2 "<<i<<Endl;
				// cout<<i-1<<" "<<pre[i]+2<<Endl;
				for(int j=i;j<=LEN;j++){
					if(ans[j]){
						ANS|=(1<<j);
					}
				}
				ANS|=(1<<(pre[i]+2));
				break;
			}

		}
	}
	return ANS;
}
void solve(){
	int l,r;
	cin>>l>>r;
	ANS=0;
	if(l<=2&&r>=2){
		cout<<"2"<<Endl;
		return;
	}
	if(l<=12&&r>=12){
		cout<<"12"<<Endl;
		return;
	}
	int len=__lg(l),Len=__lg(r);
	// cout<<len<<" "<<Len<<Endl;
	if(len+1<Len){
		if(Len>=4){
			// cout<<Len<<" "<<
			ANS|=(1<<(Len-1));
			ANS|=4;
			cout<<ANS<<Endl;
			return;
		}
		else{
			cout<<"-1"<<Endl;
			return;
		}
	}
	for(int i=0;i<=len;i++){
		cnt[i]=0;
		ans[i]=0;
	}
	for(int i=0;i<=len;i++){
		if(l&(1<<i)){
			cnt[i]=1;
		}
		else{
			cnt[i]=0;
		}
		// cout<<cnt[i];
	}
	bool f=1;
	int num0=0,num1=0;
	for(int i=0;i<=len;i++){
		if(cnt[i]==1){
			num1++;
			f=0;
		}
		if(cnt[i]==0&&f){
			num0++;
		}
	}
	if(num0==num1){
		cout<<l<<Endl;
		return;
	}
	int ans1=find_min(l);
	int ans2=find_min((1<<(Len)));
	// cout<<ans1<<" "<<ans2<<Endl;
	if(ans1>=l&&ans1<=r){
		cout<<ans1<<Endl;
	}
	else if(ans2>=l&&ans2<=r){
		cout<<ans2<<Endl;
	}
	else{
		cout<<"-1"<<Endl;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}