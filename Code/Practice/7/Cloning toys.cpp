
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	ll x,y;
	cin >> x >> y;
	
	if(y == 0){
		cout << "NO\n"; return;
	}
	
	if(y == 1){
		if(x > 0) cout << "NO\n";
		else if(x == 0) cout << "YES\n";
		return;
	}
	
	// (y - 1) --> x
	ll val = (x - y + 1);
	if(val < 0) cout << "NO\n";
	else if(val%2 == 0) cout << "YES\n";
	else cout << "NO\n";
	
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
