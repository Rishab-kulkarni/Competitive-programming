#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m; cin >> n >> m;
	vector<int> a(m);
	for(int i = 0 ; i < m ; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	int mn = INT32_MAX - 1;
	for(int i = 0 ; i <= m - n ; ++i){
		mn = min(abs(a[i+n-1] - a[i]), mn);
	}
	cout << mn << '\n';
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
