
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	// wherever 1's are set in a[i] it should be set in a[i+1] too, rest all should be == 0
	// prev bit == 1, curr bit == 1 -> ensures lexicographically smallest	
	
	vector<int> ans {0};
	for(int i = 0 ; i < n-1 ; ++i) {
		int first = a[i];
		int second = a[i+1];
		
		// check the bits where a[i] is set and a[i+1] is not set
		int res = 0;
		for(int mask = 0 ; mask < 30 ; ++mask) {
			if(first & ( 1 << mask) && !(second & ( 1 << mask))) {
				res += ( 1 << mask);
			} 
		}
		ans.push_back(res);
		a[i+1] ^= res;
		
	}
	
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T = 1;
	cin >> T;
	while(T--) {
		solve();
	}
}
