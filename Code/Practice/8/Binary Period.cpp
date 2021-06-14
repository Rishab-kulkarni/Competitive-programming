
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	string s; cin >> s;
	int n = s.size();
	
	int cnt0 = count(s.begin(), s.end(), '0');
	int cnt1 = count(s.begin(), s.end(), '1');
	
	if(cnt0 == 0){
		cout << string(2*n, '1') << '\n'; return;
	}
	
	if(cnt1 == 0) {
		cout << string(2*n , '0') << '\n'; return;
	}
	
	string temp;
	for(int i = 0 ; i < n ; i++) {
		if(s[0] == '1'){
			temp.push_back('1');
			temp.push_back('0');
		} else {
			temp.push_back('0');
			temp.push_back('1');
		}
	}
	cout << temp << '\n'; 
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
