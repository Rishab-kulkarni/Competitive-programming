
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	for(auto val : a) cout << val << ' ';
	cout << '\n';
	for(auto val : b) cout << val << ' ';
	cout << '\n';

}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
