#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// check if n+1 is a power of 2 then ans = (n+1)/2 else ans = n+1;
	ll n; cin >> n;
	
	if(n == 0){
		cout << 0 << '\n';
		return;
	}
	
	if(n & 1) cout << (n+1)/2 << '\n';
	else cout << n+1 << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
