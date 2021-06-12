

// fenwick tree impl, not my original sol

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m; 
vector<int> a,fenwick;

void add(int i, int elem) {
	i++;
	while(i <= n) {
		fenwick[i] += elem;
		i += (i & (-i));
	}
}

int sum(int i) {
	i++;
	int res = 0;
	while(i > 0) {
		res += fenwick[i];
		i -= (i & (-i));
	}
	return res;
} 


void solve() {
	cin >> n >> m; 
	
	a.resize(n);
	fenwick.resize(n+1,0);
	
	for(int i = 0 ;i < n ; ++i) cin >> a[i];
//	for(int i = 0 ; i < n ; ++i) {
//		add(i, a[i]);
//	}
	
	while(m--) {
		int query; cin >> query;
		if(query == 1) {
			int v,x; cin >> v >> x;
			--v;
			a[v] = x;
			int elem = sum(v);
			add(v,-elem);
			add(v+1,elem);
			
		}
		else if(query == 2) {
			int y; cin >> y;
			add(0,y);
		}
		else if(query == 3) {
			int pos; cin >> pos;
			pos--;
			cout << sum(pos) + a[pos] << '\n';
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
