
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	map<ll,ll> m;
	ll ans = 0;
	for(int i = 0 ; i < n ; ++i){
		ans += ll(n - i)*m[a[i]];
		m[a[i]] += ll(i+1);
	}
	cout << ans << '\n';
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
