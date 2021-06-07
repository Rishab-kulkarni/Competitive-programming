

//https://codeforces.com/contest/1225/submission/81946872
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,k,d;
	cin >> n >> k >> d;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	map<int,int> mp;
	for(int i = 0 ; i < d ; ++i) mp[a[i]]++;
	
	int ans = mp.size();
	for(int i = d ; i < n ; ++i) {
		mp[a[i]]++;
		if(mp[a[i-d]] == 1){		// remove from segment
			mp.erase(a[i-d]);
		}
		else{
			mp[a[i-d]]--;
		}
		ans = min(ans, (int)mp.size());
	}
	cout << ans << '\n';
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
