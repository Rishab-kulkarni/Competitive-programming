#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,m; cin >> n >> m;
	vector<ll> x(n); vector<ll> p(m);
	for(int i = 0 ; i < n ; ++i) cin >> x[i];
	for(int i = 0 ; i < m ; ++i){
		cin >> p[i];
	}
	
	// (pairwise diffs)%p == 0
	//	O(m*n)
	
	vector<ll> diff;
	for(int i = 0 ; i < n - 1 ; ++i){
		diff.push_back(x[i+1] - x[i]);
	}	
	
	assert(int(diff.size()) == n-1);
	
	ll gcd_diff = diff[0];
	for(int i = 1 ; i < n-1 ; ++i){
		gcd_diff = gcd(gcd_diff, diff[i]);
	}
	 
	for(int i = 0 ; i < m ; ++i){
		ll elem = p[i];
		if(gcd_diff % elem == 0){
			cout << "YES\n" << x[0] << ' ' << i+1 << '\n'; return; 
		}
	}
	cout << "NO\n";	
		
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
