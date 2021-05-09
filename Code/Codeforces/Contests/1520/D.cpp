
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){	
	int n; cin >> n;
	
	ll val = 0;
	map<ll,ll> mp;
	for(int i = 0 ; i < n ; i++){
		int x;cin >> x;
		mp[x - i]++;
	}
	
	for(auto it : mp){
		val += it.second*(it.second - 1)/2;
	}
	cout << val << '\n';
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
