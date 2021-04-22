
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	map<int, vector<int>> mp; 
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		mp[x].push_back(i);
	}
	
	int mx = INT32_MIN;
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		vector<int> b = (*it).second;
		for(int i = 0 ; i < (int)b.size() - 1 ; i++){
			mx = max(mx, abs(b[i+1] - b[i]));
		}
	}
	cout << (mx == INT32_MIN ? 0 : mx) << '\n';
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
