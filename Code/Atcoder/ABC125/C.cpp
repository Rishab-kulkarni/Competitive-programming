
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n+1), l(n+1), r(n+2);
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		l[i] = a[i];
		r[i] = a[i];
	}
	
	l[0] = 0; r[n+1] = 0;	
	for(int i = 1 ; i <= n ; i++){
		l[i] = gcd(l[i], l[i-1]);
	}
	
	for(int i = n ; i >= 1 ; i--){
		r[i] = gcd(r[i], r[i+1]);
	}
	
	int ans = INT32_MIN ;
	for(int i = 1 ; i <= n+1 ; i++){
		ans = max(ans, gcd(l[i-1], r[i+1]));
	}
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
