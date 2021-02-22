#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	int ans = INT32_MAX - 1;
	
	for(int i = 0 ; i < n - k + 1 ; i++){
		ans = min(ans, abs(a[i+k-1] - a[i]));
	}
		
	cout << ans << '\n';
}


int main(){

	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}
