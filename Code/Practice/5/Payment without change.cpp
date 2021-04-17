
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll a,b,n,S;
	
	cin >> a >> b >> n >> S;
	
	cout << (a*n + b >= S && S%n >= 0 && S%n <= b ? "YES" : "NO") << '\n';
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
