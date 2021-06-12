
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	
	map<ll,ll> mp;
	for(int i = 0 ; i < n ; ++i) {
		ll x; cin >> x;
		mp[x]++;
	}
	
	vector<ll> freq;
	for(auto it : mp){
		freq.push_back(it.second);
	}
	
	sort(freq.begin(), freq.end());
	
	int sz = freq.size();
	
	ll sv = 0;
	for(int i = 0 ; i < sz ; ++i){
		sv = max(sv, abs(freq[i]*(sz - i)));
	}
	cout << n - sv << '\n';
	
	
	/**vector<ll>pref(sz,0);
	
	for(int i = 0; i < sz ; ++i) {
		if(i){
			pref[i] = pref[i-1] + freq[i];
		}
		else pref[i] = freq[i];
	} 
	
	ll ans = INT32_MAX - 1;
	
	for(int i = 0 ; i < sz ; ++i) {
		int idx = i;
		ll rsum = pref[sz-1] - pref[idx] - (sz - idx - 1)*freq[idx]; 
		ll lsum = pref[idx-1];
		ans = min(ans, abs(rsum + lsum));
		
	}
	**/
		
/*	for(int i = 0 ; i < sz ; i++){
		int idx = i;
		int cnt = 0;
		for(int j = 0 ; j < idx ; j++) {
			cnt += freq[j];
		}
		
		for(int j = idx + 1 ;  j < sz ; j++) {
			cnt += (freq[j] - freq[idx]);
		}
		ans = min(ans, cnt);
	}
	*/
	
//	cout << ans << '\n';
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
