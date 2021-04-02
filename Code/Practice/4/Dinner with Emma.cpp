#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,m,elem,mn, mx = -1; 
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++){
		mn = INT32_MAX - 1;
		for(int j = 0 ; j < m ; j++) {
			cin >> elem;
 			mn = min(elem, mn);
		}

		mx = max(mx, mn);
	}
	cout << mx << '\n';
	
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
