
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,m;
	cin >> n >> m;
	
	ll a[5] = {0};
	ll b[5] = {0};
	for(int i = 1 ; i <= n ; i++) a[i%5]++;
	for(int i = 1 ; i <= m ; i++) b[i%5]++;
	

	ll ans = a[0]*b[0] + a[1]*b[4] + a[4]*b[1] + a[2]*b[3] + a[3]*b[2]; 
 
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

