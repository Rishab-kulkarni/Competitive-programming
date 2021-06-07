
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void brute_force() {
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i].first >> a[i].second;
	
	vector<pair<int,int>> ans(n);
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			if(i != j){
				// i -> home j -> away
				if(a[i].first != a[j].second){
					ans[i].first++;
					ans[j].second++;
				}
				else{
					ans[i].first++;
					ans[j].first++;
				}
			}
		}
	}
	for(auto val : ans){
		cout << val.first << ' ' << val.second << '\n';
	}
}


void solve() {
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	
	unordered_map<int,int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i].first >> a[i].second;
		mp[a[i].first]++;
	}
	
	// home kits for team i -> (n - 1) home games + away games where home kit of away team == away kit of team i
	vector<pair<int,int>> ans(n, {0,0});
	for(int i = 0 ; i < n ; ++i){
		ans[i].first = ((n - 1) + mp[a[i].second]);
		ans[i].second = 2*(n - 1) - ans[i].first;
	}
	
	for(auto val : ans) cout << val.first << ' ' << val.second << '\n';
	
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
