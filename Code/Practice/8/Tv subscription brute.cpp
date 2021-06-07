
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,k,d;
	cin >> n >> k >> d;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	set<int> s; int ans = n;
	
	for(int i = 0 ; i < n - d + 1 ; ++i){
		set<int> s;
		for(int j = i ; j < i+d ; ++j){
			s.insert(a[j]);
		}
		ans = min(ans, int(s.size()));
	}
	cout << ans << '\n';
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
