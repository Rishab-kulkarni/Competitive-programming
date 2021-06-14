
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,m; cin >> n >> m;
	vector<string> a(n);
	
	vector<int> pos(m+1, 0);
	
	for(int i = 0 ; i < n ; ++i) {
		cin >> a[i];
		vector<int> temp;
		for(int j = 0 ; j < m ; ++j) {
			if(a[i][j] == '1') {
				pos[j]++;
			}
		}
	}
	
	for(int i = 0 ; i < n ; ++i) {
		bool ok = true;
		for(int j = 0 ; j < m ; ++j) {
			if(a[i][j] == '1') {
				if(pos[j] == 1) {
					ok = false;
				}
			}
		}
		if(ok) {
			cout << "YES\n"; return;
		}
	}	

	cout << "NO\n";
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
}
