
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve() {
	
	string s; cin >> s;
	int n = s.size();
	
	int i = 0, j = n-1;
	
	int cnt = 0;
	
	bool ok = true;
	while(cnt != n) {
		char ch = 'a' + n - cnt - 1;
		
		if(s[i] == ch) {
			i++;
			cnt++;
		}
		else if(s[j] == ch) {
			j--;
			cnt++;
		}
		
		else {
			ok = false;
			break;
		}
	}
	
	ok &= (cnt == n);
	cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T = 1;
	cin >> T;
	while(T--) {
		solve();
	}
}
