
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> ans;
	
	int curr = 1;
	for(int i = 1 ; i <= n ; ++i){
		int l,r; cin >> l >> r;
		
		if(curr < l){
			curr = l;
		}
		
		if(curr <= r){
			ans.push_back(curr);
			curr++;
		}
		
		else {
			ans.push_back(0);
		}
	}
	
	for(auto val : ans) cout << val << ' ';	
	cout << '\n';
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
