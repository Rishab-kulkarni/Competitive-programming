
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,m,q; cin >> n >> m >> q;
	
	string s,t; cin >> s >> t;
	
	int dp[n+1] = {0};		// no of substrings ending at this pos
	
	for(int i = 1 ; i <= n ; ++i) {
		int j = 0;
		for(; j < m ; ++j){
			if(s[i - 1 + j] != t[j]) break;
		}
		
		if(j == m){
			dp[i] = dp[i-1] + 1;
		}
		else {
			dp[i] = dp[i-1];
		}
	}

	while(q--) {
		int x,y; cin >> x >> y;
		x--;
		y -= (m-1);
		
		if(x <= y){
			cout << dp[y] - dp[x] << '\n';
		} 
		
		else{
			cout << 0 << '\n';
		}
	}
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
