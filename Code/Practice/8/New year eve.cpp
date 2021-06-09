
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll n,k;
	cin >> n >> k;
	
	if(k == 1){
		cout << n << '\n';
	}
	else {
		ll ans = 1;
		while(ans <= n) ans *= 2;
		cout << ans - 1 << '\n';
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
