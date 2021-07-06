
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//	https://atcoder.jp/contests/abc125/tasks/abc125_c

void solve() {
	int n; cin >> n;
	vector<ll> a(n+1);
	
	ll sum = 0;
	for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    
    if(n == 1) {
    	cout << 1 << '\n'; return;
    }

    vector<ll> pref(n+1);
    pref[0] = 0;
    for (int i = 1; i <= n; ++i)
        pref[i] = gcd(pref[i-1], a[i]);

    vector<ll> suff(n+2);
    suff[n+1] = 0;
    for (int i = n; i > 0; --i) 
        suff[i] = gcd(suff[i+1], a[i]);

   	ll ans = LONG_LONG_MAX;
	for (int i = 1; i <= n; ++i) {
    	ll val = gcd(pref[i-1], suff[i+1]);
    	ans = min((sum - a[i] + val)/val, ans);
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
