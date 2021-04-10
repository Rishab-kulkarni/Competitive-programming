
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	int n; cin >> n;
	map<int,vector<int>> mp;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		mp[x].push_back(i+1);
	}
	
	for(auto it = mp.begin(); it!= mp.end() ; it++){
		vector<int> v = (*it).second;
		if((int)v.size() == 1){
			cout << v[0] << '\n';
			return;
		}
	}
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
