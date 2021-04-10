
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	// maintain the max-till now
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];

	int mx = -1;
	for(int i = 0 ; i < n ; i++){
		if(a[i] > mx + 1){
			cout << i+1 << '\n';
			return;
		}
		mx = max(mx,a[i]);
	}
	
	cout << -1 << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
