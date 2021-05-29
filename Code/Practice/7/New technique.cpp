
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,m; cin >> n >> m;
	
	// store the row and col ids of each elem, and then try to construct the matrix	
	int row[n*m], col[m*n];
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			int x; cin >> x;
			x--;
			col[x] = j;
		}
	}
	for(int i = 0 ; i < m ; ++i){
		for(int j = 0 ; j < n ; ++j){
			int x; cin >> x;
			x--;
			row[x] = j;
		}
	}
	
	int ans[n][m];
	for(int i = 0 ; i < n*m ; ++i){
		ans[row[i]][col[i]] = i + 1;
	}
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cout << ans[i][j] << ' '; 
		}
		cout << '\n';
	}
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
