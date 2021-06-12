
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	string s; cin >> s;		
	int n = s.size();
	
	int first_br = -1, last_br = -1, first_col = -1, last_col = -1;
	
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '['){
			first_br = i; break;
		}
	}
	
	for(int i = n - 1 ; i >= 0 ; i--) {
		if(s[i] == ']') {
			last_br = i; break;
		}
	}
	
	if(first_br == -1 || last_br == -1 || first_br > last_br) {
		cout << -1 << '\n'; return;
	}
	
	int cnt2 = 0;
	for(int i = first_br ; i < last_br ; i++) {
		if(s[i] == ':') cnt2++;
	}
	
	if(cnt2 < 2) {
		cout << -1 << '\n'; return;
	}
	
	for(int i = 0 ; i < n ; i++) {
		if(s[i] == ':' && i > first_br) {
			first_col = i; break;
		} 
	}
	
	for(int i = n-1 ; i >= 0 ; i--) {
		if(s[i] == ':' && i < last_br) {
			last_col = i; break;
		}
	}
	
//	assert(last_col > first_col);
	int cnt = 0;
	for(int i = first_col; i < last_col ; i++) {
		cnt += (s[i] == '|');
	}
	
	cout << cnt + 4 << '\n';
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
}
