// Finding factors of a number in O(sqrt(n))		-> Naive method O(n)
// Check for sqrt -> precision errors

// Idea - Factors exist in a pair, co-factors and only check upto sqrt(n)

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n; cin >> n;

	ll val = sqrtl(n);
	vector<ll> factors;
	for(int i = 1 ;  i <= val ; ++i){
		if(n%i == 0){
			if(n/i == i){
				factors.push_back(i); 
			}
			else {
				factors.push_back(n/i);
				factors.push_back(i);
			}
		}
	}
	sort(factors.begin(), factors.end());
	for(auto val : factors) cout << val << ' ';
	cout << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}

