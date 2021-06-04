
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> even, odd;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		if(x%2 == 0) even.push_back(x);
		else odd.push_back(x);
	}
	
		
	for(auto val : odd){
		even.push_back(val);
	}
	
	assert(int(even.size()) == n);
	int cnt = 0;
	for(int i = 0 ; i < n - 1 ; ++i){
		for(int j = i+1 ; j < n ; ++j){
			if(gcd(even[i], 2*even[j]) > 1) cnt++;
		}
	}
	cout << cnt << '\n';
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
