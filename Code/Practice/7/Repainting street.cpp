
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n); map<int,int> mp;
	for(int i = 0 ; i < n ; ++i) {
		cin >> a[i];
		mp[a[i]]++;
	}

	int ans = INT32_MAX - 1;
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		int p1 = 0, cnt = 0;
		int key = (*it).first;
		while(p1 < n){
			if(a[p1] != key){
				cnt++;
				p1 += k;
			}
			else p1++;
		}
		ans = min(ans, cnt);
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
