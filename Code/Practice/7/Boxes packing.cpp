
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	
	vector<bool> vis(n,false);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	int cnt = 0, tmp = n;
	
	while(tmp > 0){
		int incl = -1;
		for(int i = 0 ; i < n ; ++i){
			if(a[i] > incl && !vis[i]){
				incl = a[i];
				vis[i] = true;
				tmp--;
			}
		}
		cnt++;
	}
	cout << cnt << '\n';
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
