
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i) cin >> b[i];
	

	if(a[0] != b[0]) {
		cout << "NO\n"; return;
	}	
	
	set<int> s;
	s.insert(a[0]);
	for(int i = 1 ; i < n ; ++i) {
		if(a[i] > b[i]) {	// something to sub
			if(s.find(-1) == s.end()){
				cout << "NO\n"; return;
			}
		}
		
		else if(a[i] < b[i]) {	// need something to add
			if(s.find(1) == s.end()) {
				cout << "NO\n"; return;
			}	
		}
//		else continue;	
		s.insert(a[i]);
	}
	cout << "YES\n";
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
