
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,x = -1; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		x = max(x, a[i]);
	}
	
	set<ll> factors;
	for(ll i = 1 ; i*i <= x ; i++){
		if(x%i == 0){
			factors.insert(x/i);
			factors.insert(i);
		}
	}
	
	int mxn = -1;
	for(int i = 0 ; i < n ; ++i){
		if(factors.find(a[i]) != factors.end()){
			factors.erase(factors.find(a[i]));
		}
		else {
			mxn = max(mxn, a[i]);
		}
	}
	
	cout << x << ' ' << mxn << '\n';
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
// 	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
