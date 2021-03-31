
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n,W;
	cin >> n >> W;
//	vector<int> a(n);
	map<int,int, greater<int>>mp;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x; 
		mp[x]++;
	}

	int mx = (1 << 20); 
	int ans = 0;
	
	while(true){
		int temp = W;
		bool ok = false;
		for(int i = mx ; i >= 1 ; i >>= 1){
			if(mp[i]) ok = true;
			while(mp[i] && i <= temp){
				mp[i]--;
				temp -= i;
			}
		}
		if(!ok) break;
		ans++;
	}
	 
	cout << ans << '\n';	
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

