
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	
	vector<ll> a(n+1), b(n+1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	for(int i = 1 ; i <= n ; ++i) cin >> b[i];
	
	
	sort(a.begin() + 1, a.end());
	sort(b.begin() + 1, b.end());
	
	ll score_a = 0, score_b = 0, i = n, j = n;
	bool ok = true;
	for(int idx = 0 ; idx < 2*n ; idx++){
		if(ok){
			if(a[i] > b[j]){
				score_a += a[i];
				i--;		
			}
			else{
				j--;
			}
		}
		else{
			if(b[j] > a[i]){
				score_b += b[j];
				j--;
			}
			else {
				i--;
			}
		}
		ok = !ok;
	}
	cout << score_a - score_b << '\n';
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
//	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
