
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	
	int cnt_clk = count(s.begin(), s.end(), '>');
	int cnt_aclk = count(s.begin(), s.end(), '<');
	
	if(cnt_clk > 0 && cnt_aclk > 0){
		int cnt = 0;
		
		s.push_back(s[0]);
		for(int i = 0 ; i < n ; i++){
			if(s[i] == '-' || s[i+1] == '-') cnt++;
		}
		cout << cnt << '\n';
		return;
	}
	cout << n << '\n';	
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
