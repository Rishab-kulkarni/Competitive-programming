
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	map<int,int>mp;
	for(int i = 1 ; i <= n ; ++i){
		int x; cin >> x;
		mp.insert({x,i});
	}
	
	int val;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		if(i == 0){
			cout << mp[x] << ' ';
			val = mp[x];
			continue;
		}
		if(mp[x] > val){
			cout << mp[x] - val << ' ';
			val = mp[x];
		}
		else cout << 0 << ' ';
	}
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
