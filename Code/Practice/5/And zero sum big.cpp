
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

void solve(){
	int n,k;
	cin >> n >> k;
	
	ll ans = n;
	for(int i = 0 ; i < k-1 ; i++){
		ans *= n;
		ans %= MOD;
	}
	cout << ans << endl;
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
