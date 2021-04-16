#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> odd,even;
	
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		if(x & 1) odd.push_back(x);
		else even.push_back(x);
	}
	
	for(auto val : odd) cout << val << ' ';
	for(auto val : even) cout << val << ' ';
	
	cout << '\n';
	
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
