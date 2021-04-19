
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n,r;
	cin >> n >> r;
	vector<ll> a(n), b(n);
	for(auto & x : a) cin >> x;
	for(auto & x : b) cin >> x;
	
//	if(n == 1){
//		cout << a[0] << '\n';
//		return;
//	}
	
	ll mx = b[0];
	ll x = b[0];
	for(int i = 1 ; i < n ; i++){
		ll val = r*(a[i] - a[i-1]);
		if(x - val <= 0){
			x = b[i];
		}
		else{
			x = x - val + b[i];
		}
		mx = max(mx,x); 
	}
	cout << mx << '\n';
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

