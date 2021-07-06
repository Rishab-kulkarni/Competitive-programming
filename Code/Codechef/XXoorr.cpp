
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,k ; cin >> n >> k;
	
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	map<int, int> mp;
	for(int i = 0 ; i < n ; ++i) {
		for(int mask = 0 ; mask < 30 ; ++mask) {
			if((a[i] & ( 1 << mask))) mp[mask]++;
		}	
	}
	
/**	int ans = 0;
	
	for(int mask = 0 ; mask < 30 ; ++mask) {
		int tmp = mp[mask];
		
		while(tmp != 0) {			// O(n^2*30)
			int cnt = 0;
			vector<int> vec;
			for(int i = 0 ; i < n ; ++i) {
				if(a[i] & ( 1 << mask )) {
					cnt++;
					if(cnt <= k) {
						vec.push_back(i);
					}
					else break;
				}
			}
			
			int sz = vec.size();
			for(int i = 0 ; i < sz ; ++i) {
				a[vec[i]] = a[vec[i]] ^ ( 1 << mask);
			}
			tmp -= sz;
			if(sz != 0) ans++;
		}
	}
	
	**/
	
	int my_ans = 0;
	for(int mask = 0 ; mask < 30 ; ++mask) {
		my_ans += (mp[mask] + k - 1)/k;
	}
	
	cout << my_ans << '\n';
	
	// cout << ans << '\n';
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
