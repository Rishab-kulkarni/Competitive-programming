
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,m; cin >> n >> m;
	
	vector<vector<int>> a(n, vector<int>(m));
	
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if((i == 0 && j == 0) || (i == 0 && j == m-1) || (i == n-1 && j == 0) || (i == n-1 && j == m-1)){
				if(a[i][j] > 2){
					cout << "NO\n"; return;
				}
				else a[i][j] = 2;
			}
			
			else if((i == 0) || (j == 0) || (i == n-1) || (j == m-1)){
				if(a[i][j] > 3){
					cout << "NO\n"; return;	
				}
				else a[i][j] = 3;
			}
			else{
				if(a[i][j] > 4){
					cout << "NO\n"; return;
				}
				else a[i][j] = 4;
			}
		}
	}
	
	cout << "YES\n";
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
