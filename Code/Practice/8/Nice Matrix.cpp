
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,m;
	cin >> n >> m;
	
	int sum = 0;
	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	
	for(int i = 0 ; i < n ; ++i) {
		for(int j = 0 ; j < m ; ++j) {
			cin >> a[i][j];
		}
	}
	
	ll ans = 0;
	for(int i = 0 ; i < n ; ++i) {
		for(int j = 0 ; j < m ; ++j) {
			if(!vis[i][j]) {
				set<pair<int,int>> s {{i,j} , {n - 1 - i, j}, {i, m - 1 - j}, {n - 1 - i, m - 1 - j}};
				vector<int> temp;
				for(auto [x,y] : s) {
					temp.push_back(a[x][y]);
				}

				vis[i][j] = vis[n - 1 - i][j] = vis[i][m - 1 - j] = vis[n - 1 - i][m - 1 - j] = true;

				sort(temp.begin(), temp.end());
				int median = temp[(int)temp.size()/2];
				for(int i = 0 ; i < int(temp.size()) ; ++i) {
					ans += abs(temp[i] - median); 
				}
			}
		}
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
