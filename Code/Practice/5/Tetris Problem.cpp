
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

void solve(){
	// can we make all the elements as the same?
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int mx = *max_element(a.begin(), a.end());
	
	bool ok = true;
	for(int i = 0 ; i < n ; i++){
		ok &= ((mx - a[i])%2 == 0);
	}
	cout << (ok ? "YES" : "NO") << '\n';
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
