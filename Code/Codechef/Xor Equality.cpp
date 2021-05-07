
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	https://cp-algorithms.com/algebra/binary-exp.html
	int n;  cin >> n;
	auto binpow = [] (ll a,ll b) -> ll{
		ll m = 1e9 + 7, res = 1;
		a %= m;
		while (b > 0) {
		    if (b & 1)
		        res = res * a % m;
		    a = a * a % m;
		    b >>= 1;
		}
		return res;
	};
	
	cout << binpow(2, n-1) << '\n';
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
    	solve();
	}
}

