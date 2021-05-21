
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// if n is a power of 2 ans is n-1
	ll n; cin >> n;
	
	if((n & (n - 1)) == 0){
		cout << n-1 << '\n';
	}
	
	else{
		ll val = 1;
		while(val <= n){
			val *= 2;
		}
		val /= 2;
		cout << val - 1 << '\n';
	}
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
