#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	ll cnt_op = 0, cnt_ep = 0, cnt_eq = 0, cnt_oq = 0;
	for(int i = 0 ; i < n ; i++){
		ll x; cin >> x;
		(x & 1) ? (cnt_op++) : (cnt_ep++);
	}
	
	int m; cin >> m;
	for(int i = 0 ; i < m ; i++){
		ll x; cin >> x;
		(x & 1) ? (cnt_oq++) : (cnt_eq++);
	}
	
	
	ll ans = (cnt_ep*cnt_eq) + (cnt_op*cnt_oq);
	cout << ans << '\n';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
} 
