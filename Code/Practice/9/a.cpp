
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	
	int n,k;
	cin >> n >> k;
	
	vector<ll> a(k), temp(k);
	
	for(int i = 0 ; i < k ; ++i) cin >> a[i];
	for(int i = 0 ; i < k ; ++i) cin >> temp[i]; 
	
	vector<ll> ans;
	for(int i = 0 ; i < n ; ++i) {
		ll val = LONG_LONG_MAX; 
		for(int j = 0 ; j < k ; ++j) {
			val = min(val, temp[j] + abs(a[j] - i - 1));
		}
		ans.push_back(val);
	}
	
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
	
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
