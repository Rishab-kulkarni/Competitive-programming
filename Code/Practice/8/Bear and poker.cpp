
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
vector<long long> trial_division(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
} */


void solve() {
	int n; cin >> n;
	
	set<ll> s;
	for(int i = 0; i < n ; ++i){
		ll x; cin >> x;
		while(x%2 == 0) x /= 2;
		while(x%3 == 0) x /= 3;
		
		s.insert(x);	
	}
	cout << (int(s.size()) == 1 ? "Yes" : "No") << '\n';
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
