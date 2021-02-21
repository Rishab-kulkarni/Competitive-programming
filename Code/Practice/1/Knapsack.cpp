#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,W;
	cin >> n >> W;
	vector<ll> w(n);
	for(int i = 0 ; i < n ; ++i) cin >> w[i];
	
	ll cur_sum = 0;
	vector<int> ans;
	for(int i = 0 ; i < n ; ++i){
		if(cur_sum + w[i] <= W){
			cur_sum += w[i];
			ans.push_back(i+1);
		}
		
		else if(w[i] <= W && w[i] >= (W + 1)/2){
			ans = {i+1};
			cur_sum = w[i];
		}
		
	}
	
	if(cur_sum >= (W + 1)/2){
		cout << ans.size() << '\n';
		for(auto val : ans) cout << val << ' ';
		cout << '\n';
	}
	
	else{
		cout << -1 << '\n';
	}
	
	return;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
