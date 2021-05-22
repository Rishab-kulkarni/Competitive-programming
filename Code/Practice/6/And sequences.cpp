
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	int elem = a[0];
	for(int i = 1 ; i < n ; ++i) elem &= a[i];
	
	ll cnt = 0;
	for(int i = 0 ; i < n ; ++i){
		if(elem == a[i]) cnt++;
	}
	
	ll ans = cnt*(cnt - 1)%MOD;
	
	ll prod = 1;
	for(int i = 1 ; i <= n-2 ; i++){
		prod *= i;
		prod %= MOD;
	}
	cout << (ans*prod)%MOD << '\n';
	
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
