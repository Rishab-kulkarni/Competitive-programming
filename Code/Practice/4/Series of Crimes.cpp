
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	vector<pair<int,int>> coords;
	map<pair<int,int>, bool> vis;
	int n,m; cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			char ch; cin >> ch;
			if(ch == '*') {
				coords.push_back({i,j});
				vis[{i,j}] = true;
			}
		}
	}
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			if(coords[i].first != coords[j].first && coords[i].second != coords[j].second){
				if(vis[{coords[i].first, coords[j].second}]){
					cout << coords[j].first << ' ' << coords[i].second;
					return; 
				}
				
				else{
					cout << coords[i].first << ' ' << coords[j].second;
					return; 
				}
			}
		}
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
