
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,m,k;
	cin >> n >> m >> k;
	
	ll ans = 0;
	if(n == m){
		for(ll i = 1 ; i <= n ; i++){
			ans ^= (2*i + k);
		}
	}
	
	else{
		ans = (2 + k)^(n + m + k);
	}
	
//	cout << ans << '\n';
	// brute force
	
	ll ans1 = 0;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			ans1 ^= (i + j + k);
		}
	}
//	cout << ans1 << '\n';
//	assert(ans = ans1);
	
	if(ans == ans1) s.push_back('1');
	
	
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	cout << s.size();	
}

