
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	map<int,int>mp;
	for(int i = 0 ; i < n ; ++i) {
		int elem;cin >> elem;
		mp[elem]++;
	}
	
	// The main idea is to find the most frequent number, 
	// check whether the rest of the numbers occur more than this number or less thanthat	
	int mx = -1;
	for(auto it : mp){
		mx = max(mx, it.second);
	}
	
	int ans = 0;	
	if(mx <= n - mx){
		ans = 0;
	}
	else{
		ans = 2*mx - n;
	}
	
	if(n & 1) ans = max(ans, 1);
	cout << ans << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
