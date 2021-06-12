
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll n,l,r; cin >> n >> l >> r;
	
	vector<ll> a(n);
	for(int i = 0 ; i < n ; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	int ans = 0;
	for(int i = 0 ; i < n ; ++i) {
		int min_req = l - a[i];
		auto idx_min_req = lower_bound(a.begin(), a.end(), min_req) - a.begin();
		
		
		
		
	}
	
	
	
	
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
