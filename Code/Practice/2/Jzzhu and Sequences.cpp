#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

void solve(){
	int x,y; cin >> x >> y;
	int n; cin >> n;
	
	int vals[] = {x-y,x, y, y-x , -x , -y };
	
	ll ans = vals[n%6];
//	if(ans >= 0) ans = ans%MOD;
//	else ans = (ans + MOD)%MOD;
	
	cout << (ans%MOD + MOD)%MOD << '\n';
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
