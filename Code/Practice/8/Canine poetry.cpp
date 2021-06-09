
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	string s; cin >> s;
	
	int n = s.size();
	
	// finish all 2-3 palindromes first
	int cnt = 0;
	for(int i = 1 ; i < n ; ++i){
		if(s[i] == '*') continue;
	
		if(s[i-1] == s[i] || (i - 2 >= 0 && s[i-2] == s[i])){
			s[i] = '*';
			cnt++;
		} 
	}
	cout << cnt << '\n';
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
