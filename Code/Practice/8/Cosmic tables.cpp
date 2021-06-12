
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,m,k;
	cin >> n >> m >> k;
	
	vector<vector<int>> a(n, vector<int>(m));
	for(int i = 0 ; i < n ; ++i) {
		for(int j = 0 ; j < m ; ++j) cin >> a[i][j];
	}
	
	vector<int> rows;
	for(int i = 0 ; i < n; ++i){
		rows.push_back(i);
	}
	
	vector<int> cols;
	for(int i = 0 ; i < m ; ++i) {
		cols.push_back(i);
	}
	
	
	while(k--) {
		char ch; int x,y;
		cin >> ch >> x >> y;
		--x;
		--y;
		
		if(ch == 'c') {
			swap(cols[x], cols[y]);
		}
		
		else if(ch == 'r') {
			swap(rows[x], rows[y]);
		}
		else if(ch == 'g') {
			cout << a[rows[x]][cols[y]] << '\n';
		}
		else assert(false);
	}
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
