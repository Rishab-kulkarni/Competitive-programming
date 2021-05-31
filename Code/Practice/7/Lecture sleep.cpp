
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	
	int n,k; cin >> n >> k;
	vector<int> a(n), time(n);
	
	ll sum1 = 0, sum2 = 0;
	
	
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i){
		cin >> time[i];
		if(time[i]) sum1 += a[i];
	}
	
	for(int i = 0 ; i < k ; ++i){
		if(!time[i]) sum2 += a[i];
	}
	ll mx = sum2;
	for(int i = 0 ; i < n - k ; ++i){
		if(time[i+k] == 0){
			sum2 += a[i+k];
		}
		if(time[i] == 0){
			sum2 -= a[i];
		}
		mx = max(mx, sum2);
	}
	
	cout << sum1 + mx << '\n';
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
// 	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
