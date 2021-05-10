
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


void solve(){
	int n, m, x, MOD = 1e9 + 7;
	cin >> n >> m >> x;
	
	int dp[n+1] = {0};
	
	
	dp[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = x ; j <= m ; j++){
            if( i >= j){
	           dp[i] += dp[i - j];
	           dp[i] %= MOD;
           }
    	}
    }
	cout << dp[n] << '\n';
}
	

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
