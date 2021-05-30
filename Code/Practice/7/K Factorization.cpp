
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	
	ll n,k; cin >> n >> k;
	
	vector<ll> factors;
	for(ll i = 2 ; i*i <= n ; i++){
		while(n%i == 0){
			factors.push_back(i);
			n /= i;
		}
	}
	
	if(n > 1){
		factors.push_back(n);
	}
	
	if(int(factors.size()) < k){
		cout << -1 << '\n'; return;
	}
	else{
		for(int i = 0 ; i < k-1 ; i++){
			cout << factors[i] << ' ';
		}
		ll val = 1;
		for(int i = k-1 ; i < int(factors.size()) ; i++){
			val *= factors[i];
		}
		cout << val << ' ';
	}
	cout << '\n';
	
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
