#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)


void solve(){
	string s;cin >> s;
	int n = s.size();
	
	vector<vector<int>> a(3);
	for(int i = 0 ; i < n ; i++){
		a[s[i] - '1'].push_back(i);
	}
	
	int ans = 1e9;
	for(int i = 0 ; i < n ; i++){
		int mx = -1;
		bool ok = true;
		for(int j = 0 ; j < 3 ; j++){
			int pos = lower_bound(a[j].begin(), a[j].end(), i) - a[j].begin();
			if(pos == (int)a[j].size()) ok = false;
			else mx = max(mx, a[j][pos]); 
		}
		if(ok){
			ans = min(ans, mx - i + 1);
		}
	}
	
	if(ans == 1e9) ans = 0;
	
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
