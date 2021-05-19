
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll MOD = 1e4 + 7;

void solve() {
	int n;
	cin >> n;
	
	vector<ll> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	sort(a.begin(), a.end());
	int i = 0, j = n-1;
	ll ans = 0;
	while( i < j ){
		a[i] %= MOD;
		a[j] %= MOD;
		ans += (2*a[i]*a[j])%MOD;
		ans %= MOD;
		i++;
		j--;
	}
	
	if(n%2) {
		ans += ((a[n/2]%MOD)*(a[n/2]%MOD))%MOD;
		ans %= MOD;
	}
	cout << ans%MOD << '\n';
	
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
