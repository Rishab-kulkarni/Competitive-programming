
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m; 
vector<int> a;

void solve() {
	cin >> n >> m;
	a.resize(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	int sum_y = 0;
	while(m--) {
		int query; cin >> query;
		if(query == 1) {
			int v,x;
			cin >> v >> x;
			--v;
			a[v] = x;
			a[v] -= sum_y;
		}
		else if(query == 2) {
			int y; cin >> y;
			sum_y += y;
		}
		else if(query == 3) {
			int pos; cin >> pos;
			--pos;
			cout << a[pos] + sum_y << '\n';	
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
