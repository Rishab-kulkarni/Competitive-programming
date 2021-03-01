#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll x,y; cin >> x >> y;
	ll a,b; cin >> a >> b;
	
	if(x == 0 && y == 0){
		cout << 0 << '\n';
		return;
	}
	
	ll ans = 0;
	if(x == 0) {
		x += 1;
		ans += a;
	}
//	cout << ans << '\n';
	if(y == 0){
		y += 1;
		ans += a;
	}
	
	ans += min(abs(x-y)*a + b*x, abs(x-y)*a + b*y);
	cout << ans << '\n';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
} 
