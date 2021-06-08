
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	
	int num; cin >> num;
	string s; cin >> s;
	
	if(num == 12) {
		if(s[0] > '1' && s[1] > '0') s[0] = '0';
		if(s[1] == '0') s[0] = '1';
		if(s[0] == '1' && s[1] > '2') s[0] = '0';
		if(s[3] >= '6') s[3] = '0';
	}
	
	else if(num == 24) {
		if(s[0] > '2') s[0] = '0';
		if(s[0] == '2' && s[1] > '3') s[1] = '0';
		if(s[3] >= '6') s[3] = '0';		
	}
	cout << s << '\n';
		
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
