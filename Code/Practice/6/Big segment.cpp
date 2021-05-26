
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	
	int mn = INT32_MAX - 1;
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i].first >> a[i].second;
		mn = min(mn, a[i].first);
	}
	
	int mx = -1;
	int pos = -1;
	for(int i = 0 ; i < n ; ++i){
		if(a[i].first == mn){
//			mx = max(mx, a[i].second);
			if(a[i].second > mx){
				mx = a[i].second;
				pos = i+1;
			}			
		}
	}
	
	bool ok = true;
	for(int i = 0 ; i < n ; ++i){
		if(a[i].first != mn && a[i].second != mx){
			ok &= (a[i].first >= mn && a[i].second <= mx);
		}
	}
	
	cout << (ok ? pos : -1) << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
