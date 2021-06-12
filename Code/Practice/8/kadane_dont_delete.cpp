
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	vector<int> a = {-2,1,2,4,-5,-3,9,-1};
	
	int n = a.size();
	
//	int sum = 0;
	int best = INT_MIN;
	// brute force
	for(int start_pos = 0 ; start_pos < n ; ++start_pos){
		for(int j = start_pos + 1 ; j < n ; ++j){
			// considering a subarray
			int sum = 0;
			for(int k = start_pos ; k < j ; k++){
				sum += a[k];
			}
			best = max(best, sum);
		}
	}
	
	cout << best << '\n';
	
		
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
