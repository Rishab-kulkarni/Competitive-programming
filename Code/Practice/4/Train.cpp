
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n; cin >> n;
	vector<int>a(n+1), b(n+1);
	vector<int>times(n);
	
	for(int i = 0 ; i < n ; i++) cin >> a[i+1] >> b[i+1];
	for(int i = 0 ; i < n ; i++) cin >> times[i];
	
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		ans += (b[i] - a[i] + 1)/2;
		ans = max(ans, b[i]);
		ans += (a[i+1] - b[i] + times[i]);
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

