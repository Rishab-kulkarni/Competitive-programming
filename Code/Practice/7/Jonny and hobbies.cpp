
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];

	sort(a.begin(), a.end());
	
	bool ok = true;
	for(int i = 1 ; i <= 1024 ; ++i){
		ok = true;
		vector<int> vals(n);
		for(int j = 0 ; j < n ; ++j){
			vals[j] = a[j] ^ i;
		}
		sort(vals.begin(), vals.end());
		for(int j = 0 ; j < n ; ++j){
			if(vals[j] != a[j]){
				ok = false; break;
			}
		}
		if(ok){
			cout << i << '\n'; return;
		}  
	}
	cout << -1 << '\n';
	
	
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
