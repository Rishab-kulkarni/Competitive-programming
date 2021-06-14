
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	
	// split into two subarrays such that S1%p + S2%p == max
	// s1 -> prefix sum -> s1%p is maximum
	ll n,p; cin >> n >> p;
	ll sum = 0;
	
	vector<ll> pref(n);
	for(int i = 0 ; i < n ; ++i) {
		ll x; cin >> x;
		sum += x;
		pref[i] = sum;
	}
	
	ll mx = -1;
	for(int i = 0 ; i < n ; ++i) {
		mx = max(mx, pref[i]%p + (pref[n-1] - pref[i])%p);
	}
	cout << mx << '\n';
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
