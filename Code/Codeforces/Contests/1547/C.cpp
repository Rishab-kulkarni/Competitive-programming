
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	
	
	int k,n,m;
	cin >> k >> n >> m;
	
	vector<int> a(n);
	vector<int> b(m);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int j = 0 ; j < m ; ++j) cin >> b[j];
	
	vector<int> ans;
	
	int curr = 0;
	
	int i = 0, j = 0;
	while(curr <  n+m) {
		
		
		if(i < n && a[i] == 0) {
			k++;
			ans.push_back(a[i++]);
		}
		
		else if(j < m && b[j] == 0) {
			k++;
			ans.push_back(b[j++]);
		}
		
		else if(i < n  && a[i] <= k) {
			ans.push_back(a[i++]);
		}
		else if(j < m && b[j] <= k) {
			ans.push_back(b[j++]);
		}
		
		else {
			cout << -1 << '\n';
			return;
		}
		curr++;
	}
	
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T = 1;
	cin >> T;
	while(T--) {
		solve();
	}
}
