
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	ll n; cin >> n;
	
	int sz = to_string(n).size();
	
//	auto bin_exp = [] (ll a, ll b) -> ll{
//		ll res = 1;
//		while(b > 0){
//			if(b & 1) res *= a;
//			a *= a;
//			b /= 2;
//		}
//		
//		return res;
//	};
	
	ll ans = sz*n;
	for(ll i = 10 ; i <= n ; i*= 10){
		ans -= (i - 1);
	} 
	cout << ans << '\n';
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
// 	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
