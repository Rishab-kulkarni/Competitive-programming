
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,m, mn = INT32_MAX - 1; cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
			mn = min(a[i][j], mn);	
		}
	}

	bool vis[n] = {0};
	for(int i = 0 ; i < n ; i++){
		if(find(a[i].begin(), a[i].end(), mn) != a[i].end()){
			vis[i] = true;
		}
	}
	int ans = INT32_MAX - 1;
	for(int i = 0 ; i < n ; i++){
		if(!vis[i]){
			ans = min(ans, *min_element(a[i].begin(), a[i].end()));
		}		
	}
	cout << (ans == INT32_MAX - 1 ? mn : ans) << '\n';
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}

