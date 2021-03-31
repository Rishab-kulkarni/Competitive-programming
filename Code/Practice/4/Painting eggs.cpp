
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second; 
	
	string ans = "";
	int w1 = 0, w2 = 0;
	for(int i = 0 ; i < n ; i++){
		w1 += a[i].first;
		if(abs(w1 - w2) <= 500) ans += "A";
		
		else{
			w1 -= a[i].first;
			w2 += a[i].second;
			if(abs(w1 - w2) <= 500) ans += "G";
			else{
				cout << -1 << '\n'; return;
			}
		}
	}
	assert((int)ans.length() == n);
	cout << ans << '\n'; 
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

