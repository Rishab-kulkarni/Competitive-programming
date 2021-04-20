
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// if all elements distinct --> -1, same --> 2
	int n; cin >> n;
	unordered_map<int,vector<int>> mp;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		mp[x].push_back(i);
	}
	
	if(n == 1 || int(mp.size()) == n){
		cout << -1 << '\n'; return;
	}	
		
	int mn = INT32_MAX - 1;
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		vector<int> b = (*it).second;
		for(int i = 0 ; i < (int)b.size()-1 ; i++){
			mn = min(mn, abs(b[i+1] - b[i]) + 1);
		}
	}
	cout << mn << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
