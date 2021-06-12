
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	
	map<ll,ll> mp;
	for(int i = 0 ; i < n ; ++i) {
		ll x; cin >> x;
		mp[x]++;
	}
	
	vector<ll> freq;
	for(auto it : mp){
		freq.push_back(it.second);
	}
	
	sort(freq.begin(), freq.end());
	
	int sz = freq.size();
	
	int ans = INT32_MAX - 1;
	for(int i = 1 ; i <= n ; ++i){
		int idx = lower_bound(freq.begin(), freq.end(), i) - freq.begin();  
		ans = min(ans, n - (sz - idx)*i);
	}
	cout << ans << '\n';
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
