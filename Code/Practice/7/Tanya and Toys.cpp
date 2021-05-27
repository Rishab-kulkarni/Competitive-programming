
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const int mxn = 2e5 + 5;

void solve() {
	int n,m; cin >> n >> m;
	
	set<int> s;
	for(int i = 0 ; i < n ; ++i){
		int x; cin >> x;
		s.insert(x);
	}
	
	int total = 0;
	vector<int> ans;
	for(int i = 1 ; i <= mxn ; i++){
		if(s.find(i) == s.end()){
			// include it
			if(total + i > m) continue;
			ans.push_back(i);
			total += i;
		}
		
		if(total == m) break;
	}
	
//	assert(total == m);
	cout << ans.size() << '\n';
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
