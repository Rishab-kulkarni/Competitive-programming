
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	
	ll sum = 0;
	for(int i = 1 ; i <= n - 2 ; i++){
		sum += 1*(i+1)*(i+2);
	}
	cout << sum << '\n';
	
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
