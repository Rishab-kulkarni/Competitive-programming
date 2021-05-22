
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n, m; cin >> n >> m;
	vector<ll> a(n);
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	
	set<int> s;
	for(int i = 0 ; i < n ; i++){
		if(s.find(a[i] % m) == s.end()){
			s.insert(a[i] % m);
		}
		else{
			cout << 0 << '\n';
			return;
		}
	}
	
	ll prod = 1;
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1 ; j < n ; ++j){
			ll num = abs(a[i] - a[j]);
			num %= m;
			prod *= num;
			prod %= m;
		}
	}
	
	cout << prod%m << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
