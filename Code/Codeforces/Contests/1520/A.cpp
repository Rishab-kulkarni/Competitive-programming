
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){	
	int n; cin >> n;
	string s; cin >> s;
	
	map<char,vector<int>> mp;
	for(int i = 0 ; i < n ; i++){
		mp[s[i]].push_back(i);
	}
	
	bool ok = true;
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		vector<int> v = (*it).second;
		for(int i = 0 ; i < (int)v.size() - 1 ; i++){
			ok &= (v[i+1] - v[i] == 1);
		}
	}
	cout << (ok ?  "YES" : "NO") << '\n';
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
