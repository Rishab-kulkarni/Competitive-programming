
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}

	int pref = -1, suff = n;
	// pref increasing , suff decreasing
	for(int i = 0 ; i < n ; ++i){
		if(a[i] < i) break;
		else pref = i;
	}
	
	for(int i = n-1 ; i >= 0 ; --i){
		if(a[i] < n - i - 1) break;
		else suff = i;
	}
	
	cout << ((pref >= suff) ? "YES" : "NO") << '\n';
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
