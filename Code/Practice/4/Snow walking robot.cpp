
#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve(){
	string s;
	cin >> s;
	
	if(s.length() == 1){
		cout << 0 << '\n';return;
	}
	
	int cntR = 0, cntL = 0, cntU = 0, cntD = 0;
	for(char ch : s){
		cntR += (ch == 'R');
		cntL += (ch == 'L');
		cntU += (ch == 'U');
		cntD += (ch == 'D');
	}
	
	int mnx = min(cntR, cntL);
	int mny = min(cntU, cntD);
	
	if((cntU == 0 || cntD == 0) && mnx!=0){
		cout << 2 << '\n' << "RL\n";
		return;
	}
	
	if((cntR == 0 || cntL == 0) && mny != 0){
		cout << 2 << '\n' << "UD\n";
		return;
	}
	
	string ans;
	for(int i = 0 ; i < mny ; i++) ans.push_back('U');
	for(int i = 0 ; i < mnx ; i++) ans.push_back('R');
	for(int i = 0 ; i < mny ; i++) ans.push_back('D');
	for(int i = 0 ; i < mnx ; i++) ans.push_back('L');
	
	cout << ans.length() << '\n';
	cout << ans << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
