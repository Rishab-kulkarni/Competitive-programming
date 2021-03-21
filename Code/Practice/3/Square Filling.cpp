	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m; cin >> n >> m;
	int a[n][m], b[n][m];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){ 
			cin >> a[i][j];
			b[i][j] = 0;
		}
	}
	
	vector<pair<int,int>>ans;
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < m-1 ; j++){
			// Best trick ever
			if(a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1] == 4){
				b[i][j] = 1;
				b[i][j+1] = 1;
				b[i+1][j] = 1;
				b[i+1][j+1] = 1;
				ans.push_back({i+1,j+1});
			}
		}
	}	
	
	bool ok = true;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(a[i][j] != b[i][j]) {
				ok = false;
				break;
			}
		}
	}
	
	if(!ok) cout << -1 << '\n';
	else{
		cout << ans.size() << '\n';
		for(auto val : ans) cout << val.first << ' ' << val.second << '\n';
	}
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
