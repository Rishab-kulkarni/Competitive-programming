
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,m,height;
	cin >> n >> m >> height;
	
	vector<int> front(m);
	vector<int> left(n);
	vector<vector<int>> h(n, vector<int>(m));
	
	for(int i = 0 ; i < m ; i++) cin >> front[i];
	for(int i = 0 ; i < n ; i++) cin >> left[i];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> h[i][j];
		} 
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(h[i][j]){
				cout <<  min(front[j], left[i]) << ' ';
			}
			else cout << 0 << ' ';
		}
		cout << '\n';
	}
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
