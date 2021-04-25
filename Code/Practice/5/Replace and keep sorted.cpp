
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,q,k;
	cin >> n >> q >> k;
	
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	while(q--){
		int l,r;
		cin >> l >> r;
		--l, --r;
		long long ans = (a[r] - a[l] + 1) - 2*(r - l + 1) + k;
		cout << ans << '\n';
				
	}
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
