
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll x; cin >> x;
	ll val = 0, cnt = 1;
	while(true){
		val += cnt;
		if(val >=x){
			if(val - x == 1) cout << cnt + 1 << '\n';
			else cout << cnt << '\n';
			break;
		}
		cnt++;
	}
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
