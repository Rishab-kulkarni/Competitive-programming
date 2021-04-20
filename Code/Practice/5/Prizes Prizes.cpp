
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n; cin >> n;
	vector<ll> a(n), b(5);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < 5 ; i++) cin >> b[i];
	
	ll p = 0;
	vector<ll> ans(5, 0);
	for(int i = 0 ; i < n ; i++){
		p += a[i];
		
		for(int j = 4 ; j >=0 ; j--){
			ans[j] += p/b[j];
			p %= b[j]; 
		}
		
	}
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
	cout << p << '\n';
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
