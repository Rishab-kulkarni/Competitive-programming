#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n;cin >> n;
	vector<int> c(n),v(n);
	for(int i = 0 ; i < n ; i++) cin >> v[i];
	for(int i = 0 ; i < n ; i++) cin >> c[i];
	
	vector<vector<pair<int,int>>> subsets(1 << n, vector<pair<int,int>> (n));
	for(int mask = 0 ; mask < (1 << n) ; mask++){
		for(int i = 0 ; i < n ; i++){
			if(mask & (1 << i)){
				subsets[mask].push_back({v[i], c[i]});
			}
		}
	}
	
	
	int mx = INT32_MIN;
	for(auto vec : subsets){
		int c1 = 0;
		int c2 = 0;
		for(auto elem : vec){
			c1 += elem.first;
			c2 += elem.second;
		}
		mx = max(mx, c1 - c2);
	}
	cout << mx << '\n';
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
