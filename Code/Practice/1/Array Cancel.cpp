#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ;i < n ; i++){
		cin >> a[i];
	}
	
	// max- suffix sum calc
	reverse(a.begin(), a.end());
	ll sum = 0;
	ll ans = INT32_MIN ;
	for(int i = 0 ; i < n ; i++){
		sum += a[i];
		ans = max(ans, sum);
	}
		
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
