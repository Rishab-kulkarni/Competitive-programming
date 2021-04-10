
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n; cin >> n;	
	
	ll sum = n*(n+1)/2;
	if(sum&1){
		cout << "NO\n"; return;
	}
	
	bool vis[n+1] = {false};
	vector<int> ans;
	
	ll req = sum/2;
	for(ll i = n ; i >= 1 ; i--){
		if(req >= i){
			req -= i;
			vis[i] = true;
			ans.push_back(i);
		}
	} 	
	
	vector<int> ans2;
	for(int i =1 ; i <= n ; i++){
		if(!vis[i]){
			ans2.push_back(i);
		}
	}
	
	cout << "YES\n";
	cout << ans.size() << '\n';
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
	cout << ans2.size() << '\n';
	for(auto val : ans2) cout << val << ' ';
	cout << '\n';
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
